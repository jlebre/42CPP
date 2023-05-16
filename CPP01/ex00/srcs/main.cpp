/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 20:28:44 by jlebre            #+#    #+#             */
/*   Updated: 2023/05/16 13:49:26 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *Brain_Eater = newZombie("McBrainz");
    std::cout << std::endl;
    randomChump("HalfDead");
    std::cout << std::endl;
    delete Brain_Eater;
}

/*
Allocation and de-allocation is automatic - Stack
Allocation and de-allocation is manual - Heap
*/

/*
Stack Allocation:
The allocation happens on contiguous blocks of memory.
We call it a stack memory allocation because the allocation happens in the function call stack.
The size of memory to be allocated is known to the compiler and whenever a function is called,
its variables get memory allocated on the stack. And whenever the function call is over,
the memory for the variables is de-allocated.
This all happens using some predefined routines in the compiler.
A programmer does not have to worry about memory allocation and de-allocation of stack variables.
This kind of memory allocation is also known as Temporary memory allocation because as soon as 
the method finishes its execution all the data belonging to that method
flushes out from the stack automatically.
This means any value stored in the stack memory scheme is accessible as long as the method hasn’t completed 
its execution and is currently in a running state.

Key Points:
- It’s a temporary memory allocation scheme where the data members are accessible only if the method( ) that contained them is currently running.
- It allocates or de-allocates the memory automatically as soon as the corresponding method completes its execution.
- We receive the corresponding error Java. lang. StackOverFlowError by JVM, If the stack memory is filled completely.
- Stack memory allocation is considered safer as compared to heap memory allocation because the data stored can only be accessed by the owner thread.
- Memory allocation and de-allocation are faster as compared to Heap-memory allocation.
- Stack memory has less storage space as compared to Heap-memory.

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Heap Allocation:
The memory is allocated during the execution of instructions written by programmers.
Note that the name heap has nothing to do with the heap data structure.
It is called a heap because it is a pile of memory space available to programmers to allocate and de-allocate.
Every time when we made an object it always creates in Heap-space and the referencing information
to these objects is always stored in Stack-memory.
Heap memory allocation isn’t as safe as Stack memory allocation because the data stored
in this space is accessible or visible to all threads.
If a programmer does not handle this memory well, a memory leak can happen in the program.

The Heap-memory allocation is further divided into three categories:

    - These three categories help us to prioritize the data(Objects) to be stored in the Heap-memory or in the Garbage collection.

        Young Generation – It’s the portion of the memory where all the new data(objects) are made to allocate
            the space and whenever this memory is completely filled then the rest of the data is stored in Garbage collection.

        Old or Tenured Generation – This is the part of Heap-memory that contains the older data objects that are not
            in frequent use or not in use at all are placed.

        Permanent Generation – This is the portion of Heap-memory that contains the JVM’s metadata for the runtime classes and application methods.

Key Points:
- We receive the corresponding error message if Heap-space is entirely full,  java. lang.OutOfMemoryError by JVM.
- This memory allocation scheme is different from the Stack-space allocation, here no automatic de-allocation feature is provided. 
    We need to use a Garbage collector to remove the old unused objects in order to use the memory efficiently.
- The processing time(Accessing time) of this memory is quite slow as compared to Stack-memory.
- Heap memory is also not as threaded-safe as Stack-memory because data stored in Heap-memory are visible to all threads.
- The size of the Heap-memory is quite larger as compared to the Stack-memory.
- Heap memory is accessible or exists as long as the whole application(or java program) runs.

*/