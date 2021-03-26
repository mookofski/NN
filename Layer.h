#pragma once
#include <vector>
#include "Matrix.h"
namespace NN
{
class Layer
{
	//rq 
	//in data c layer size×samplesize
	//bias data*next layer size	//weight data size*1
	//res n data size*sample
  Matrix* Activation;
 Matrix* Bias;
Matrix* Weight;
Matrix* Result;


	};
	}