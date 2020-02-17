#include <string>
#include <memory.h>
using std::string;
class Trie{
public:
    Trie(){
        memset(next,0,sizeof(next));
        isEnd = false;
    }
    void insert(string word){
        Trie* node = this;
        for(auto c : word){
            if(node->next[c-'a'] == nullptr){
                node->next[c-'a'] = new Trie();
            }
            node = node->next[c-'a'];
        }
        node->isEnd = true;
    }
    bool search(string word){
        Trie* node = this;
        for(auto c : word){
            node = node->next[c-'a'];
            if(node == nullptr) return false;
        }
        return node->isEnd;
    }
    bool startsWith(string prefix){
        Trie* node = this;
        for(auto c : prefix){
            node = node->next[c-'a'];
            if(node == nullptr) return false;
        }
        return true;
    }
private:
    bool isEnd;
    Trie* next[26];
};

#include <iostream>

int main(){
    Trie* node = new Trie();
    node->insert("abcde");
    bool ser_abc = node->search("abc");
    bool ser_abx = node->search("abx");
    bool ser_abcde = node->search("abcde");
    bool start_abc = node->startsWith("abc");

using std::cout;
using std::endl;
    cout << "ser_abc = " << ser_abc << endl 
        <<"ser_abx = " << ser_abx << endl
        <<"ser_abcde = " << ser_abcde << endl
        <<"start_abc = " << start_abc << endl;

}
