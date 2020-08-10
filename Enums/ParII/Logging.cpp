#include<iostream>

class Log
{
	public:
		const int LoggingErr = 0;
		const int LoggingWarning = 1;
		const int LoggingInform=2;

		enum TheLevel{
			Err=0, Warn, Info
		};
	private:
		TheLevel my_LogLev=Info;
	public:
		void SetTheLevel(TheLevel level)
		{
			my_LogLev = level;
		}

		void Error(const char* msg)
		{
			if(my_LogLev >= LoggingErr)
				std::cout<<"[ERROR]: "<<msg<<std::endl;
		}

		void Warning(const char* msg)
		{
			if(my_LogLev >=LoggingWarning)
				std::cout<<"[WARNING]: "<<msg<<std::endl;
		}

		void Information(const char* msg)
		{
			if(my_LogLev >=LoggingInform)
				std::cout<<"[INFORMATION]: "<<msg<<std::endl;
		}
};
int main()
{
	//Creating a Class Instance
	Log omarsLog;
	omarsLog.SetTheLevel(Log::Err);
	omarsLog.Warning("This is a warning");
	omarsLog.Error("This is a huge ERR!");
	omarsLog.Information("This is some useful information that may be handy");
}
