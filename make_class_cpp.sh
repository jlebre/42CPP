#!/bin/bash

#Script to create .hh and .cpp

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

create_makefile()
{
    touch Makefile
    check_srcs
    echo "CC = g++" >> Makefile
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
    echo -e '\t@$(CC) $(CPPFLAGS) -O3 -c $< -o $@' >> Makefile
    echo >> Makefile
    echo '$(NAME):' >> Makefile
    echo -e "\t"@'$(CC)' '$(CPPFLAGS)' '$(SRCS)' -o '$(NAME)' >> Makefile
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


    echo "#ifndef FIXED_HPP" >> 
# define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int                 _fixed_value;
        static const int    _fractional_bits;

    public:
        Fixed(void);    // Default constructor
        Fixed(const Fixed& copy);   // Copy Constructor
        // (..) Other Constructors
        ~Fixed(); // Destructor
        Fixed& operator = ( const Fixed&); // Assignment
        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
};

#endif