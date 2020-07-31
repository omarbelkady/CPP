#include<iostream>
#include<array>

template<typename O, size_t B>
class MyArray{
    public:
        //Create a function that returns the size
        constexpr int Size() const{
            return B;
        }
        
        //Return a reference not a value
        O& operator[](int index){
            return my_data[index];
        }
        
    private:
        O my_data[B];
            
};


int main(){
    int size= 6;
    //Always define your size in compile time
    MyArray<int, 6> my_data;
    
    //Make sure the size of the is not bigger than this value
    //Static assert is a value that gets enforced at compile time
    //static_assert(my_data.Size()<11, "Size is too big");
    

    
    //This is better than the stack allocated array because we now know
    //the size of the array at any given time
    for(int i=0;i<my_data.Size();i++)
    {
        my_data[i]=6;
        std::cout<<my_data[i]<<std::endl;
    }
    
}
