/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
private:
    // Create map for old and new node
    unordered_map<Node*, Node*> nodeMap;
public:
    Node* copyRandomList(Node* head) {
        // Return if head is NULL
        if(!head){
            return head;
        }
        
        // Create new Node
        Node* newNode = new Node(head -> val);
        
        // Insert old node and its new one
        nodeMap[head] = newNode;
        
        // Update next pointer to new next
        newNode -> next = copyRandomList(head -> next);
        
        // Update random pointer to new node
        newNode -> random = nodeMap[head -> random];
        
        // Return new node
        return newNode;
        
    }
};
