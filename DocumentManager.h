
#pragma once
#include <string>
#include <unordered_set>
#include <unordered_map>

class DocumentManager{
  std::unordered_map<int,int> licenses_table;
  std::unordered_map<std::string,int> documents_table;
  std::unordered_set<int> patrons;
public:
  void addDocument(std::string name, int id, int license_limit);

  void addPatron(int patronID);

  int search(std::string name); // returns docid if name is in the document collection or 0 if the name is not in the collection

  bool borrowDocument(int docid, int patronID);  // returns true if document is borrowed, false if it can not be borrowed (invalid patronid or the number of copies current borrowed has reached the license limit)

  void returnDocument(int docid, int patronID);
};