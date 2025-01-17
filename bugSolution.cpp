std::vector<int> vec; 
for (int i = 0; i < 10; ++i) {
  vec.push_back(i); 
}

for (auto it = vec.begin(); it != vec.end(); ) {
  if (/* your condition to remove */ true) { 
    it = vec.erase(it);
  } else { 
    ++it; 
  } 
}
//This will remove all elements correctly