# CPP
C++ Programs


## How to compile c++ Code
```bash
$ g++ nameOfFile.cpp
$ ./a.out
```

## How To Compile(2526 328 Activity) C++17 if you get the error "decomposition declaration are a C++17 extension"
```bash
$ g++ -std=c++17 nameOfFile.cpp
$ ./a.out
```

## Setters And Getters Example
```cpp
#include<iostream>
using namesapce std;
class statusOfClubMembers{
	std::string status = "Gold";

	public:
		std::string fName;
		std::string lName;

		//getter
		std::string return_the_status()
		{
			return status;
		}
		
		//setter
		void set_the_status(std::string status)
		{
			this->status = status;
			//setting the reference to the current instance of the class to the name of your parameter
		}

		std::cout<<"2526 56837 26265"<<endl;
}
```
