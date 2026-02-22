#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    char email[50];
    int admin;
} Usuario;

typedef struct {
    Usuario usuario;
} UsuarioBuilder;

void iniciarBuilder(UsuarioBuilder *builder) {
    strcpy(builder->usuario.nome, "");
    strcpy(builder->usuario.email, "");
    builder->usuario.admin = 0;
}

void setNome(UsuarioBuilder *builder, char nome[]) {
    strcpy(builder->usuario.nome, nome);
}

void setEmail(UsuarioBuilder *builder, char email[]) {
    strcpy(builder->usuario.email, email);
}

void setAdmin(UsuarioBuilder *builder, int admin) {
    builder->usuario.admin = admin;
}

Usuario build(UsuarioBuilder *builder) {
    return builder->usuario;
}

int main() {
    UsuarioBuilder builder;
    Usuario usuario;

    iniciarBuilder(&builder);

    setNome(&builder, "Matheus");
    setEmail(&builder, "matheus@email.com");
    setAdmin(&builder, 1);

    usuario = build(&builder);

    printf("Nome: %s\n", usuario.nome);
    printf("Email: %s\n", usuario.email);
    printf("Admin: %d\n", usuario.admin);

    return 0;
}