#ifndef TREE_NODE_HPP
#define TREE_NODE_HPP


namespace Tree{
    
    template<class DataType>
    class Node{
        private:
            bool _isEmpty;
            DataType _value;
            Node<DataType> *_left, *_right;
        public:
            // Constructor
            Node();
            Node(const DataType& value);
            Node(const DataType& value, Node* left, Node* right);

            
            // setters
            void setLeft(Node* left);
            void setRight(Node* right);
            void setValue(const DataType& value);

            // getters
            Node* getLeft()const;
            DataType getValue()const;
            Node* getRight()const;

            // methods
            void display()const;
            string toString()const;

            bool isEmpty()const;
            bool isNotEmpty()const;

            // Destructor
            ~Node();
    };

} // namespace Tree


#endif // TREE_NODE_HPP