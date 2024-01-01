# Anvie Utils Template

[![CMake](https://github.com/AnvieLabs/AnvieUtilsTemplate/actions/workflows/cmake.yml/badge.svg)](https://github.com/AnvieLabs/AnvieUtilsTemplate/actions/workflows/cmake.yml)  

This repository serves as a template to quickly kickstart your project using the Anvie Utils library with the CMake build system.

## Getting Started
To use this template and integrate Anvie Utils into your project:
- Create a new repository using this template
- Click on the "Use this template" button on GitHub to create a new repository in your account based on this template.
- Clone your new repository
    
``` bash
git clone https://github.com/your-username/your-repository.git
cd your-repository
```


## Initialize the submodules

``` bash
git submodule update --init --recursive
```

## Configure and generate your project using CMake

``` bash
mkdir build && cd build
cmake ..
```

## Build your project

``` bash
cmake --build .
```
Start using Anvie Utils in your project

## Testing

Go through the testing example set up in [`Source/Tests`](Source/Tests)

## Workflow (GitHub Actions)

A workflows file is already setup that runs tests for Anvie Utils automatically on every push. Make sure to edit the [`.github/workflows/cmake.yml`](.github/workflows/cmake.yml) file and add your own test executable at the end of it by adding the following line :

``` yaml
.
. # other things
.
    - name: Test
      working-directory: ${{github.workspace}}/Build
      run: bin/test
```

## Features

- Includes Anvie Utils library as a submodule for easy integration.
- CMake-based build system for cross-platform compatibility.
- Quick setup to get you started with Anvie Utils in your CMake projects.
- A workflow ready repo

<center>
<h4> Made with ❤️‍🔥 by Anvie Labs </h4>
</center>
