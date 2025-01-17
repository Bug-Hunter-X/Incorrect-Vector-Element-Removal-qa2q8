# Incorrect Vector Element Removal in C++

This repository demonstrates a common error when removing elements from a `std::vector` in C++ while iterating through it using an index.  The provided code shows the error and a corrected version.

## The Problem

When removing elements from a `std::vector` using `erase()`, the iterators and indices to elements after the removed element become invalid.  The provided `bug.cpp` shows how using an index in a loop for removal can lead to unexpected behavior and elements not being removed correctly.

## The Solution

The solution, shown in `bugSolution.cpp`, uses iterators to remove elements safely and avoids the indexing issue. Iterators automatically adjust after an element is removed.