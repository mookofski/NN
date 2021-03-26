#pragma once
#include <stdlib.h>
#include <math.h>

class Matrix
{
	float *elem;
	public:
  int width;
  int height;


	public:
	 void init(int wid, int size)
	{
		width=wid;
		height=size;
		elem=new float[wid*size];
		}
		~Matrix()
		{
			delete[] elem;
		}
	float& operator()(int w,int h)
	{
		return elem[w+(width*h)];
    }
    /*
   Matrix mul(Matrix &a,Matrix &b)
   {
   	if(a.width!=b.height)
   	{
   		throw "incompatible size at __FILE__:__LINE__";
   		}
   	//need to iterate over ah and bw
   	for(int h=0;h<b.height;h++)
   	{
   		
   		for(int w=0;w<a.width;w++)
   		{
   			a.operator()(w+(h*a.height))*
   			b.operator()(h+(w*b.height));
   		}
   		
   		}
   	
   	
   	}
   */
    void mul(Matrix &b)
   {
   	if(this->width!=b.height)
   	{
   		throw "incompatible size at __FILE__:__LINE__";
   		}
   	//need to iterate over ah and bw
   	for(int h=0;h<b.height;h++)
   	{
   		
   		for(int w=0;w<this->width;w++)
   		{
   			this->operator()(w,h)*=b.operator()(h,w);
   		}
   		
   		}
   	
   	
   	}
   
   void randomize(float max)
   {
   for(int h=0;h<height;h++)
   {
   	for(int w=0;w<width;w++)
   	{
   		operator()(w,h)=fmod((float)rand(),max);
   		}
   	}
   }
   
   
};