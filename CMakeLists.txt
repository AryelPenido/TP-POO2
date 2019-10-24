cmake_minimum_required(VERSION 3.15)
project(TPC__)

set(CMAKE_CXX_STANDARD 14)

include_directories(modelo/entidade)

add_executable(TPC__
        modelo/entidade/Aluno.cpp
        modelo/entidade/Aluno.hpp
        view/main.cpp controle/ControleAluno.cpp controle/ControleAluno.hpp modelo/persistencia/DAOAluno.cpp modelo/persistencia/DAOAluno.h modelo/entidade/Professor.cpp modelo/entidade/Professor.h modelo/persistencia/DAOProfessor.cpp modelo/persistencia/DAOProfessor.h controle/ControleProfessor.cpp controle/ControleProfessor.h modelo/entidade/Turma.cpp modelo/entidade/Turma.h modelo/persistencia/DAOTurma.cpp modelo/persistencia/DAOTurma.h controle/ControleTurma.cpp controle/ControleTurma.h)
