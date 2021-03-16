# integer-input-function
An easy to use, simple function to assign non-negative integer values  to variables. If there is any non-number digit, it will prompt the user to retype.

I have found solutions like this one online:
int var;
	while(!(cin>>var)){
		cout<<"\nYou didn't enter a number, try again";
		cin.clear();
		cin.ignore(1000,'\n');
	}
  It works, but does not solve the problem entirerly. 1w098 is interpreted as 1, for instance.
  u/ShakaUVM made this good library that solves many of the problems associated with std::cin: https://github.com/ShakaUVM/read
  
  My method here was providing a single function, without the need to add more libraries to your project. 


