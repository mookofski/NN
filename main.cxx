#include <stdio.h>
#include "Matrix.h"
#include <sstream>
int main(int argc, char *argv[])
{
	Matrix a,b;
	a.init(5,5);
	b.init(4,5);
	
	a.randomize(10);
	b.randomize(5);
	
	
	for(int h=0;h<a.height;h++)
	{
		for(int w=0;w<a.width;w++)
		{
			
			a.operator()(w,h)=h;
			}
			
		}
		for(int h=0;h<b.height;h++)
	{
		for(int w=0;w<b.width;w++)
		{
			
			b.operator()(w,h)=1;
			}
			
		}
	a.mul(b);
	std::ostringstream oss;
	for(int h=0;h<a.height;h++)
	{
		for(int w=0;w<a.width;w++)
		{
			
			oss<<a.operator()(w,h)<<"|";
			}
			oss<<"\n";
		}
		
		printf("%s",oss.str().c_str());
		
}