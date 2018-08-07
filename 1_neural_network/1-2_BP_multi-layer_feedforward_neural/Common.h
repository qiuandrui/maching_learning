#ifndef COMMON_H_INCLUDED
#define COMMON_H_INCLUDED

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <malloc.h>
#include <memory.h>
#include <string.h>

#define INPUT_NUM 2
#define OUT_NUM 2
#define HIDDEN_LAYER_NUM 4

struct delta_parameters{
    double * gradient;

    double * w;
    double * theta;
    
    double * v;
    double * gama;
    
};

struct input_data{
    double * x;
	double * y;
    int input_num; //none dummy node
    int out_num;   //none dummy node
    int hidden_layer_num;  //none dummy node
};

struct output_data{
    double * para_w;
    double * para_v;
    double * hidden_b;
    double * y;
};


double act_squashing_function(double x);
double act_step_function(double x);
void normal_zscore(double * inputdata, int length, double * outdata);

 
#endif
