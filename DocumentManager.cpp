
#include <string>
#include <unordered_set>
#include <unordered_map>
#include "DocumentManager.h"


void DocumentManager::addDocument(std::string name, int id, int license_limit){
  documents_table[name] = id;
  licenses_table[id] = license_limit;
};

void DocumentManager::addPatron(int patronID){
  patrons.insert(patronID);
};

int DocumentManager::search(std::string name){
  if(documents_table.find(name)!=documents_table.end()) return documents_table[name];
  return 0;
}; // returns docid if name is in the document collection or 0 if the name is not in the collection

bool DocumentManager::borrowDocument(int docid, int patronID){
  if(licenses_table[docid]>0 && patrons.find(patronID)!=patrons.end()){
    licenses_table[docid]--;
    return true;
  }
  return false;
};  // returns true if document is borrowed, false if it can not be borrowed (invalid patronid or the number of copies current borrowed has reached the license limit)

void DocumentManager::returnDocument(int docid, int patronID){
  licenses_table[docid]++;
};
