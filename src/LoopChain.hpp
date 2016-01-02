/*******************************************************************************
\file LoopChain.hpp
\autors Ian J. Bertolacci

\purpose
Contains an ordered sequence of loop nests.

\copyright
Copyright 2015 Colorado State University
*******************************************************************************/

#ifndef LOOPCHAIN_HPP
#define LOOPCHAIN_HPP

#include "LoopNest.hpp"

class LoopChain {
private:
  std::vector<LoopNest> chain;

public:
  typedef std::vector<LoopNest>::size_type size_type;

  LoopChain();

  void append( LoopNest nest );
  LoopNest& getNest( size_type index );
  size_type length();

};

#endif
