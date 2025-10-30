#include <iostream>
#include "dynamicarray.h"
using namespace std;


DynamicArray::DynamicArray(){
    //arr =  {};
    
}

/**
 This is the copy constructor
 @param  source  This is the array to be copied
 @post will be a new array with the same elements as provided source
 */

DynamicArray::DynamicArray(const DynamicArray& source) : arr(source.arr) {}

DynamicArray::~DynamicArray() {}


/**
 * Print all array elements
 * 
 * @post  Prints the contents of the DynamicArray instance
 **/

void DynamicArray::print(ostream& s) const {
   for (int i = 0; i < arr.size(); i++) {
      s << arr.at(i) << " ";
      if (i % 10 == 9) {
          s << endl; // newline every 10 elements
      }
   }
   s << endl;
}


/**
 Resizes the array based on the current value of capacity
 @pre Depends on the capacity being greater than the size of the array
 @post the array size would be bigger or smaller.
 */
/*
void DynamicArray::resizeArray() {
    int* newArr = new int[capacity];
    
    for(int i = 0; i < len; i++) {
        newArr[i] = arr[i];
    }
    delete[] arr;
    
    arr = newArr;
}
*/

/**
 Checks if there is room in the array and if not doubles the size and appends the new value
 @param  newVal  the value to be appended to the array
 @post   arr has a new value and may be double in size.
 */

void DynamicArray::append(int newVal) {
    arr.push_back(newVal);
}


/**
 Given an index position this returns the value of the elment at that position
 @param  index   the position of the desired element
 @returns  the value of the element at the desired index
 */

int DynamicArray::at(int index) const {
    return arr.at(index);
}


/**
 * Computes the sum of all the elements in the array
 *
 * @returns the total
 */
/*
int DynamicArray::sum() const {
   int totalOfElements;
   int i;

   totalOfElements = 0;
   for(i = 0; i < len; i++) {
      totalOfElements += arr[i];
   }

   return totalOfElements;
}
*/
 
/**
 Shrinks the size of the array to at least the INITIAL_CAP
 
 @pre   The capacity should not be equal to the initial capacity.
 @post  The size of the array would be either 80% of the size or INITIAL_CAP
        depending on which is bigger
 */
/*
void DynamicArray::downsizeArray() {
    bool safeToResize = (0.80 * capacity) >= INITIAL_CAP;
    
    if((len < (0.5 * capacity)) && safeToResize){
        this -> capacity = 0.80 * capacity;
        resizeArray();
    }
    // if len is less than INITIAL_CAP resize array to initial capacity
    else if((len < (0.5 * capacity)) && !safeToResize) {
        this -> capacity = INITIAL_CAP;
        resizeArray();
    }
}
*/

/**
 * Given a value parse through the array and remove the first instance of that value
 *
 * @param   valToDelete  the number to remove from the array
 * @returns  true if the value was successfully removed and false if the value wasn't found
 * @post     The lenght of the array will shrink by 1 and the capcity of the array may change.
 */
/*
bool DynamicArray::remove(int valToDelete) {
   int j;
   int i;


   // check if the value is in the array
   // if found keep track of the index
   // write over the element in that index
   // move all the elements from the next index to the end back one
    for(i = 0; i < len; i++) {
        if(arr[i] == valToDelete) {
            for(j = i; j < (len - 1); j++) {
                arr[j] = arr[j+1];
            }

            --len;
            
            // if the capacity is at INITIAL_CAP no need to run
            if(capacity != INITIAL_CAP) {
                downsizeArray();
            }

            return true;
        }
    }

   return false;
}

bool DynamicArray::operator==(const DynamicArray& source) const {
    if((this -> len) != (source.len)) {
        return false;
    }
    else if ((this -> len) == (source.len)) {
        for(int i = 0; i < len; i++) {
            if(this->arr[i] != source.arr[i]) {
                return false;
            }
        }
    }
    
    return true;
}
*/

DynamicArray& DynamicArray::operator=(const DynamicArray& source) {
    this -> arr = source.arr;
    
    return *this;
}


