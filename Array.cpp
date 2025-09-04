#include <iostream>
#include <fstream>
using namespace std;

class Array{
    protected:
    float *data;
    int lenght, size;

    private:
    //Create new Array for storing data
    void create(int size = 10){
        this->size = size;
        this->lenght = 0;
        this->data = new float[size];
    }

    //Resize of array if data is too big to fit in ..... ARRAY. nan, don't imagin somgthing dirty in your mind >^<
    void resize(int gain = 10){
        int newsite = this->size + gain;
        float *newdata = new float[newsite];

        for(int i = 0; i <= lenght; i++){
            newdata[i] = this->data[i];
        }

        delete[] data;
        this->data = newdata;
        this->size = newsite;
    }

    public:
    //adding data to array
    //at last index
    void add(float newdata){
        if(this->lenght < (this->size - 1)){
            this->lenght++;
            this->data[this->lenght] = newdata;
        }else{
            resize();
            add(newdata);
        }
    }

    //at any index
    void add(float newdata, int index){
        if((index > lenght + 1) || (index < 0)){
            cerr << "index is too far form lenght or below 0. plase try again with index <= %d (lenght of array + 1) and not below ZERO" << this->lenght + 1;
            return;
        }

        if(index == lenght + 1){
            add(newdata);
            return;
        }

        if(this->lenght >= this->size -1) resize();

        for(int i = lenght; i <= index; i--){
            this->data[i + 1] == this->data[i];
        }

        this->data[index] = newdata;
        this->lenght ++;
        return;
    }

    //remove data
    //at last index
    void remove(){
        this->lenght--;
    }

    //at any index
    void remove(int index){
        if((index > lenght) || (index < 0)){
            cerr << "notthing at thaat index or number is below ZERO plase try again with index that lessthan lenght and not below zero";
            return;
        }

        if(index == lenght){
            remove();
            return;
        }

        for(int i = index; i <= lenght; i++){
            this->data[i] == this->data[i + 1];
        }

        this->lenght --;
        return;
    }

    void swap(int indexA, int indexB){
        if((indexA > lenght) || (indexA < 0) || (indexB > lenght) || (indexB < 0)){
            cerr << "notthing at thaat index or number is below ZERO plase try again with index that lessthan lenght and not below zero";
            return;
        }
        
        float temp = this->data[indexA];
        this->data[indexA] = this->data[indexB];
        this->data[indexB] = temp;
        return;
    }
    float get(int index){
        if((index > lenght) || (index < 0)){
            cerr << "notthing at thaat index or number is below ZERO plase try again with index that lessthan lenght and not below zero";
            return;
        }

        return this->data[index];
    }

    int find(float input){
        for(int i = 0; i <= this->lenght; i++){
            int *location = new array

            if(this->data[i] == input){

            }
        }
    }
    void show();
};