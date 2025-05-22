# notesWork

Was messing around with arrays initially
Specifically with static and dynamic arrays
I had an array of size MAX which was a const int of size 10 billion
This is too large for the stack memory so there was a recursive error, so I started dynmically allocating memory using new and delete toa void memory leak. This was able to print up to 1 billion elements, nearly all of this computers memory. The way it can do is (over-stretching its memory) is by virtual memory, which compensates for lacky of physical memory by temporarily transferring data from the RAM to disk storage.

Discovered NOTRHOW, to be used with new when dynamically allocating memory with pointer. It ensures that if the memory allocation fails it doesnt crash the program but instead assigns it to a null pointer. This allows to plan around this with a simple if statement to check if your new array pointer is instead a null pointer.

commit A1