#ifndef _DYNAMIC_ARRAY_H
#define _DYNAMIC_ARRAY_H
#include <vector>


class DynamicArray {
    public:
        DynamicArray();
        DynamicArray(const DynamicArray& source);
        ~DynamicArray();
    
        int cap() const {return static_cast<int>(arr.capacity()); }
        int at(int index) const;
        void append(int newVal);
        DynamicArray& operator=(const DynamicArray& source);
        void print(std::ostream& s) const;
        int sum() const;
        bool operator== (const DynamicArray& source) const;
        bool remove(int valToDelete);
        friend std::ostream& operator<< (std::ostream &out, const DynamicArray& objToPrint);

    private:
        std::vector<int> arr;
    
        void resizeArray(); // Resizes the array
        void downsizeArray(); // Reduces the size of array as needed

};

#endif // _DYNAMIC_ARRAY_H
