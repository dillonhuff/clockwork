#include <iostream>
#include <cassert>
#include <fstream>
#include <vector>
#include <map>

#include "utils.h"

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

bool find_index_alignment(vector<string>& reference_lines, vector<string>& target_lines) {

  cout << tab(1) << "Finding alignment..." << endl;
  cout << tab(1) << "reference length: " << reference_lines.size() << endl;
  cout << tab(1) << "target length   : " << target_lines.size() << endl;
  int reference_position = 0;
  map<int, int> alignment;
  for (int i = 0; i < target_lines.size(); i++) {
    string ref = reference_lines.at(reference_position);
    string target = target_lines.at(i);
    //cout << "ref = " << ref << endl;
    //cout << "tar = " << target << endl;
    auto ref_inds = split_at(ref, ",");
    ref_inds.pop_back();
    auto target_inds = split_at(target, ",");
    target_inds.pop_back();
    //assert(false);

    if (ref_inds == target_inds) {
      alignment[reference_position] = i;
      reference_position++;
    }

    if (reference_position >= reference_lines.size()) {
      break;
    }
  }

  if (reference_position != reference_lines.size()) {
    cout << tab(1) << "ERROR: Could not align reference indexes " << reference_position << ": " << reference_lines.at(reference_position) << endl;
    return false;
  } else {
    cout << tab(1) << "Sequences align!" << endl;
    cout << "  " << "Start delay: " << alignment.at(0) << endl;
  }
  return true;
}
bool find_alignment(vector<string>& reference_lines, vector<string>& target_lines) {

  cout << tab(1) << "Finding alignment..." << endl;
  cout << tab(1) << "reference length: " << reference_lines.size() << endl;
  cout << tab(1) << "target length   : " << target_lines.size() << endl;
  int reference_position = 0;
  map<int, int> alignment;
  for (int i = 0; i < target_lines.size(); i++) {
    string ref = reference_lines.at(reference_position);
    string target = target_lines.at(i);

    if (ref == target) {
      alignment[reference_position] = i;
      reference_position++;
    }

    if (reference_position >= reference_lines.size()) {
      break;
    }
  }

  if (reference_position != reference_lines.size()) {
    cout << tab(1) << "ERROR: Could not align reference element " << reference_position << ": " << reference_lines.at(reference_position) << endl;
    return false;
  } else {
    cout << tab(1) << "Sequences align!" << endl;
    cout << "  " << "Start delay: " << alignment.at(0) << endl;
  }
  return true;
}

map<string, vector<string> > split_events(vector<string>& reference_lines) {

  map<string, vector<string> > seqs;

  for (auto l : reference_lines) {
    auto split = split_at(l, ",");
    assert(split.size() > 0);
    string rest = "";
    for (int i = 1; i < (int) split.size(); i++) {
      rest += "," + split.at(i);
    }
    seqs[split.at(0)].push_back(rest);
  }

  return seqs;
}


bool find_event_index_alignment(vector<string>& reference_lines, vector<string>& target_lines) {
  map<string, vector<string> > reference_event_sequences = split_events(reference_lines);
  map<string, vector<string> > target_event_sequences = split_events(target_lines);

  for (auto& reference_event : reference_event_sequences) {
    cout << endl << "Aligning indexes for: " << reference_event.first << endl;
    bool alignment = find_index_alignment(reference_event.second, target_event_sequences.at(reference_event.first));
  }
  return true;
}

bool find_event_alignment(vector<string>& reference_lines, vector<string>& target_lines) {
  map<string, vector<string> > reference_event_sequences = split_events(reference_lines);
  map<string, vector<string> > target_event_sequences = split_events(target_lines);

  for (auto& reference_event : reference_event_sequences) {
    cout << endl << "Aligning event: " << reference_event.first << endl;
    bool alignment = find_alignment(reference_event.second, target_event_sequences.at(reference_event.first));
    //if (!alignment) {
      //return false;
    //}
  }
  return true;
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

  assert(reference_lines.size() > 0);
  assert(reference_lines.size() <= target_lines.size());

  cout << "Finding total alignment" << endl;
  bool total_alignment = find_alignment(reference_lines, target_lines);
  if (!total_alignment) {
    cout << "Error: No total alignment" << endl;
  }
  cout << endl;

  //if (true) {
  if (false) {
    cout << "Finding event index sub-alignments" << endl;

    find_event_index_alignment(reference_lines, target_lines);
  }

  if (false) {
    cout << "Finding event sub-alignments" << endl;

    find_event_alignment(reference_lines, target_lines);
  }


  return 0;
}
