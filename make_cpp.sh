#!/bin/bash

DIR=${PWD##*/}

NB_ARGS=$#

if [[ "$NB_ARGS" -gt "1" ]];
then
    echo "Too many arguments!"
    exit 1
fi

if [[ "$NB_ARGS" == "1" ]];
then
    NAME="$1";
else
    NAME="$DIR";
fi

check_if_cpp_exists()
{
    for entry in "."/*
    do
        if [[ ${entry##*.} == "cpp" ]]
        then
            return 0 # CPP Exists
        fi
    done
    return 1
}

check_if_hpp_exists()
{
    for entry in "."/*
    do
        if [[ ${entry##*.} == "hpp" ]]
        then
            return 0 # CPP Exists
        fi
    done
    return 1
}

check_srcs()
{
    if [[ ! -d "srcs" ]]
    then
        mkdir srcs
    fi
    if check_if_cpp_exists
    then
        mv *.cpp ./srcs
    fi
    echo 'FILE_NAME = \' >> Makefile
    for entry in "./srcs"/*cpp
    do
        echo -e '\t\t\t'${entry##*/}' \' >> Makefile
    done
    echo >> Makefile
    echo 'SRCS_DIR = srcs' >> Makefile 
    echo >> Makefile
    echo 'SRCS = $(addprefix $(SRCS_DIR)/, $(FILE_NAME))' >> Makefile
    echo >> Makefile
}

check_includes()
{
    if check_if_hpp_exists
    then
        if [ ! -d "includes" ]
        then
            mkdir includes
        fi
        mv *.hpp ./includes
        echo "INC = -I includes">> Makefile
        echo >> Makefile
        echo 'CXXFLAGS = -Wall -Wextra -Werror $(INC) -std=c++98' >> Makefile
        echo >> Makefile
    else
        if [[ -d "includes" ]]
        then
            echo "INC = -I includes">> Makefile
            echo >> Makefile
            echo 'CXXFLAGS = -Wall -Wextra -Werror $(INC) -std=c++98' >> Makefile
            echo >> Makefile
        else
            echo "CXXFLAGS = -Wall -Wextra -Werror -std=c++98" >> Makefile
            echo >> Makefile
        fi
    fi
}

create_makefile()
{
    touch Makefile
    check_srcs
    echo "CC = c++" >> Makefile
    echo >> Makefile
    check_includes
    echo "RM = rm -f" >> Makefile
    echo >> Makefile
    echo "NAME =" $NAME >> Makefile
    echo >> Makefile
    echo  'all: $(NAME)' >> Makefile
    echo >> Makefile
    echo '$(OBJS_DIR)/%.o :	$(SRCS_DIR)/%.cpp' >> Makefile
    echo -e '\t@mkdir -p $(@D)' >> Makefile
    echo -e '\t@$(CC) $(CXXFLAGS) -O3 -c $< -o $@' >> Makefile
    echo >> Makefile
    echo '$(NAME): $(SRCS)' >> Makefile
    echo -e "\t"@'$(CC)' '$(CXXFLAGS)' '$(SRCS)' -o '$(NAME)' >> Makefile
    echo -e '\t@echo -e '"'"'\033[0;32m'$NAME 'Compiled!\033[0m'"'" >> Makefile
    echo >> Makefile
    echo clean: >> Makefile
    echo -e '\t@$(RM) $(OBJS_DIR)' >> Makefile
    echo >> Makefile
    echo fclean: clean >> Makefile
    echo -e '\t@$(RM) $(NAME)' >> Makefile
    echo -e '\t@echo -e '"'"'\033[0;31m'$NAME 'Removed!\033[0m'"'" >> Makefile
    echo >> Makefile
    echo re: >> Makefile
    echo -e '\t@make fclean' >> Makefile
    echo -e '\t@make' >> Makefile
    echo >> Makefile
    echo a: >> Makefile
    echo -e "\t@make re" >> Makefile
    echo -e "\t@make clean" >> Makefile
    echo -e "\t@./$NAME" >> Makefile
    echo >> Makefile
    echo .PHONY: all clean fclean re a >> Makefile
}

success()
{
    echo -e '\033[0;32mMakefile sucessfully created!\033[0m'
    exit 0
}

if [[ -e Makefile ]];
then
    echo "Makefile already exists!"
    echo "Do you want to overwrite it? (y/n): "
    read -r ans
    if [[ "$ans" == "y" ]];
    then
        rm -rf Makefile
        create_makefile
        success
    else
        exit 1
    fi
else
    create_makefile
    success
fi

##############
# by: jlebre #                      
#####################################
# Github: https://github.com/jlebre #
#####################################