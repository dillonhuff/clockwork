#include <iostream>
#include <cassert>
#include <fstream>
#include <vector>

using namespace std;

vector<string> read_lines(istream& f) {
  vector<string> lines;
  std::string line;
  while (std::getline(f, line)) {
    //std::cout << line << std::endl;
    lines.push_back(line);
  }

  return lines;
}

vector<string> read_lines(const string& f) {
  ifstream in(f);
  return read_lines(in);
}

int main(const int argc, const char** argv) {
  assert(argc == 3);

  string reference_file = argv[1];
  cout << "Reference: " << reference_file << endl;

  string target_file = argv[2];
  cout << "Target   : " << target_file << endl;

  vector<string> reference_lines = read_lines(reference_file);
  cout << "# of reference lines: " << reference_lines.size() << endl;

  vector<string> target_lines = read_lines(target_file);
  cout << "# of target lines: " << target_lines.size() << endl;

  assert(reference_lines.size() <= target_lines.size());

  int reference_position = 0;
  for (int i = 0; i < target_lines.size(); i++) {
    string ref = reference_lines.at(reference_position);
    string target = target_lines.at(i);

    if (ref == target) {
      reference_position++;
    }

    if (reference_position >= reference_lines.size()) {
      break;
    }
  }

  if (reference_position != reference_lines.size()) {
    cout << "Error: Could not align after reference element " << reference_position << ": " << reference_lines.at(reference_position) << endl;
    assert(false);
  } else {
    cout << "Sequences align!" << endl;
  }

  return 0;
}
