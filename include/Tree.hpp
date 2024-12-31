#ifndef TREE_TREE_HPP
#define TREE_TREE_HPP
#include "Node.hpp"

namespace Tree{

    // Tree
    template <class DataType>
    class Tree{
        private:
            Node<DataType>* _root;
            int _levels, _degree, _depth;
            bool *compare(const DataType&, const DataType&);
        public:
            // Constructor
            Tree();

            // setters
            void insert(const DataType& value);
            void remove(const DataType& value);
            bool find(const DataType& value, void* operation(Node<DataType>*));

            // getters

            // methods
            bool isEmpty()const;
            bool isNotEmpty()const;

            // functionalities
            void destroy(Node<DataType>* node);
            Node<DataType>* search(const DataType& value)const;


            // methods
            void display()const;
            string toString()const;

            // Destructor
            ~Tree();
    };
    
    
    
} // namespace Tree



#endif // TREE_TREE_HPP