#ifndef _DYNAMIC_ARRAY_H
#define _DYNAMIC_ARRAY_H


class DynamicArray {
    public:
        DynamicArray();
        DynamicArray(const DynamicArray& source);
        ~DynamicArray();
    
        void append(int newVal);
        int at(int index) const;
        int sum() const;
        bool remove(int valToDelete);
        void print(std::ostream& s) const;
        int cap() const { return capacity; }
        bool operator== (const DynamicArray& source) const;
        DynamicArray& operator=(const DynamicArray& source);
    

    private:
        int* arr;      // The array
        int len;       // Number of elements actually populated
        int capacity;  // New variable - this is the current capacity of the array
    
        void resizeArray(); // Resizes the array
        void downsizeArray(); // Reduces the size of array as needed

};

#endif // _DYNAMIC_ARRAY_H
