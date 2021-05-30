#include "example_progs.h"

prog resnet_coarse_pipeline_loop() {
  prog prg = resnet();
  vector<op*> old_children = prg.root->children;
  prg.root->children ={};
  auto gp_lp = prg.root->add_loop("gb_tile", 0, 4);
  gp_lp->children = old_children;
  for (auto op : prg.all_ops()) {
    for (auto& addr : op->produce_locs) {
      auto& pwa = addr.second;
      for (auto& piece : pwa) {
        piece.second += ", gb_tile";
      }
    }
    for (auto& addr : op->consume_locs_pair) {
      auto& pwa = addr.second;
      for (auto& piece : pwa) {
        piece.second += ", gb_tile";
      }
    }
  }
  return prg;
}

