# Factorial 2.0
Calculate factorials for inputs upto 3000 (on my compiler lol).I dont think we want to calculate even 3000!(sigh).

Basic Idea to make such a code :

Take an example like 100! It has 158 digits.t is not possible to store these many digits even if we use long long int.
So basically I thought of using an array to store the digits because of course 158 is very less than 100!

Now I used simple school mathematics multiplication idea of storing carry and adding later to the no.We one by one multiply x with every digit of array [] . The important point to note here is digits are multiplied from rightmost digit to leftmost digit. If we store digits in same order in array[], then it becomes difficult to update array[] without extra space. That is why array[] is maintained in reverse way, i.e., digits from right to left are stored.
   
Like 7! =5040 will be stored as {0, 4, 0, 5}.
 

For *Multiply function*:-
1) Initialize carry as 0.
2) Do following for iterator = 0 to array_size – 1
….a) Find value of array[iterator] * x + carry. Let this value be prod.
….b) Update array[iterator] by storing last digit of prod in it.
….c) Update carry by storing remaining digits in carry.
3) Put all digits of carry in array[] and increase array_size by number of digits in carry.

For *Factorial function*:-
1) Create an array[] of *size*(as required) where *size* is number of maximum digits in output.
2) Initialize value stored in ‘array[]’ as 1 and initialize ‘array_size’ (size of ‘array[]’) as 1.
3) Do following for all numbers from x = 2 to n.
  Multiply x with array[] and update array[] and array_size to store the multiplication result.
4) Print the elements of array[] in reverse order for getting the required factorial.

# Please Note:
Any improvement in code is appreciated.Also if you get a more efficient code in any other programming language you are welcome to send a pull request :-) 
