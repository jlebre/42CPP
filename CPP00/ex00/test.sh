#!/bin/bash

echo "\033[0;32mSTARTING TEST 1:"
echo "EXPECTED OUTPUT:\033[0m"
echo "SHHHHH... I THINK THE STUDENTS ARE ASLEEP..."
sleep 1
./megaphone "shhhhh... I think the students are asleep..."
sleep 1
echo "\033[0;32mSTARTING TEST 2:"
echo "EXPECTED OUTPUT:\033[0m"
echo "DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF."
sleep 1
./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
sleep 1
echo "\033[0;32mSTARTING TEST 3:"
echo "EXPECTED OUTPUT:\033[0m"
echo "* LOUD AND UNBEARABLE FEEDBACK NOISE *"
sleep 1
./megaphone