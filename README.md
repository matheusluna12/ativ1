# Implementação do Padrão Builder em C

## 📌 Descrição

Este projeto apresenta a implementação do padrão de projeto criacional **Builder** utilizando a linguagem C.

O objetivo é demonstrar como um objeto pode ser construído passo a passo, separando o processo de construção da estrutura final. Mesmo sendo uma linguagem procedural, é possível adaptar o conceito do padrão utilizando `struct` e funções específicas para montagem do objeto.

---

## 🎯 Objetivo do Padrão

O padrão Builder é utilizado quando um objeto possui vários atributos e sua criação pode se tornar confusa ou complexa.

Ele permite:

- Construção organizada do objeto  
- Separação entre criação e representação  
- Melhor legibilidade do código  
- Maior controle na montagem do objeto  

---

## 🛠 Estrutura do Projeto

O projeto contém:

- ativ1.c → Arquivo principal com a implementação do padrão  

---

## ▶ Como Compilar e Executar

No terminal, dentro da pasta do arquivo:

```bash
gcc ativ1.c -o ativ1
./ativ1
```

---

## 📚 Conclusão

A implementação demonstra que, mesmo em C, é possível aplicar conceitos de orientação a objetos de forma adaptada.  
O padrão Builder facilita a criação de objetos mais organizados e evita construtores extensos ou difíceis de entender.
