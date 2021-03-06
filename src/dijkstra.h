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
 * This file contains the dijkstra algorithm
 */

#ifndef _ALG_SRC_DIJKSTRA_H_
#define _ALG_SRC_DIJKSTRA_H_

void dijkstra_wiki(const int **matrix, const int N, const int start, int *out);

void shortest_path_kai(const int **matrix, const int N, const int start, int *out);

#endif
