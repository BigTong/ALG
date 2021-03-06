/*
 * ALG
 * --------------------------------
 *
 * Copyright 2016 Kai Zhao <loverszhao@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * This file contains the sort algorithms, including quick sort, insert
 * sort, select sort, bubble sort, and merge sort
 */

#ifndef _ALG_SRC_SORT_H_
#define _ALG_SRC_SORT_H_

// Sort from small to big

void quick_sort(int a[], const int size);

void quick_sort2(int a[], const int size);

void quick_sort_iteratively(int a[], const int size);

void quick_sort_iteratively2(int a[], const int size);

void insert_sort(int a[], const int size);

void bubble_sort(int a[], const int size);

void select_sort(int a[], const int size);

void merge_sort_iteratively(int a[], const int size);

void merge_sort(int a[], const int size);



#endif
