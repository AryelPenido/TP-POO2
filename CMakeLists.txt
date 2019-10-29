cmake_minimum_required(VERSION 3.15)
project(TPC__)

set(CMAKE_CXX_STANDARD 14)

include_directories(modelo/entidade)

add_executable(TPC__
        modelo/entidade/Aluno.cpp
        modelo/entidade/Aluno.hpp
        view/main.cpp controle/ControleAluno.cpp controle/ControleAluno.hpp modelo/persistencia/DAOAluno.cpp modelo/persistencia/DAOAluno.hpp modelo/entidade/Professor.cpp modelo/entidade/Professor.hpp modelo/persistencia/DAOProfessor.cpp modelo/persistencia/DAOProfessor.hpp controle/ControleProfessor.cpp controle/ControleProfessor.hpp modelo/entidade/Turma.cpp modelo/entidade/Turma.hpp modelo/persistencia/DAOTurma.cpp modelo/persistencia/DAOTurma.hpp controle/ControleTurma.cpp controle/ControleTurma.hpp)
