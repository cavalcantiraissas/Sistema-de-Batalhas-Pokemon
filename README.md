# Sistema de Batalhas Pokémon
**Autora:** Raissa Cavalcanti

Este programa implementa um jogo baseado no universo Pokémon, onde o jogador pode batalhar contra oponentes controlados pela CPU, utilizando Pokémon que podem ser escolhidos e treinados para a batalha. O jogo possui um sistema de pontuação, onde as vitórias aumentam a pontuação do jogador, e os rankings de jogadores são atualizados e salvos em um arquivo de texto.

O código está dividido em várias partes que tratam de funcionalidades específicas, e a interação com o usuário ocorre através de um menu interativo no terminal. Abaixo estão as principais características e componentes do programa.

### Estrutura do Programa

1. **Classes principais**:
   - **Pokemon**: Representa um Pokémon, com atributos como nome, tipos, pontos de vida (HP), ataques, etc. Cada Pokémon possui uma lista de ataques, com diferentes propriedades (nome, poder, precisão, tipo).
   - **Ataque**: Representa um ataque que pode ser usado por um Pokémon, com atributos como nome, categoria, poder e precisão.
   - **Usuario**: Representa o jogador, armazenando informações como nickname, pontuação, vitórias e derrotas. O jogador pode ser carregado ou criado a partir de um arquivo de ranking.
   - **Jogo**: Gerencia toda a lógica do jogo, incluindo batalhas, escolhas de Pokémon, ataques, atualizações de ranking e interações com o usuário através do menu. A classe também é responsável por carregar e salvar o ranking de jogadores em arquivos.

2. **Módulos adicionais**:
   - **utils**: Funções auxiliares, como cálculo de dano entre Pokémon e verificação de sucesso de ataques.

### Funcionalidade do Jogo

- **Menu Principal**: O jogador pode escolher entre várias opções no menu:
  - Iniciar uma batalha contra a CPU.
  - Selecionar a dificuldade do jogo (Fácil, Médio, Difícil).
  - Exibir o ranking de jogadores com suas pontuações, vitórias e derrotas.
  - Sair do jogo e salvar o ranking.

- **Batalha**: Ao iniciar uma batalha, o jogador escolhe seu Pokémon inicial a partir de uma lista de opções. A CPU também escolhe um Pokémon, e ambos começam a batalhar.
  - O jogador pode escolher entre atacar ou trocar de Pokémon durante sua vez.
  - Durante o turno do jogador, ele escolhe um ataque de seu Pokémon para usar na CPU. O ataque tem uma chance de sucesso, que é verificada pela precisão do ataque.
  - A CPU realiza ataques com base na dificuldade do jogo. Em dificuldade fácil, escolhe ataques mais fracos; em difícil, escolhe ataques mais fortes.
  - A batalha continua até que um dos lados não tenha mais Pokémon para lutar. O vencedor recebe pontos baseados na dificuldade da batalha.

- **Ranking**: O ranking dos jogadores é mantido em um arquivo de texto (`ranking.txt`). Sempre que um jogador vence uma batalha, sua pontuação é atualizada no ranking, que é exibido ao final de cada jogo.

- **Dificuldade**: A dificuldade da CPU pode ser ajustada para "Fácil", "Médio" ou "Difícil". A dificuldade altera o comportamento da CPU durante a batalha, como a força dos ataques que ela escolhe.

### Funcionamento do Jogo

1. **Início do Jogo**:
   - O programa solicita o nickname do jogador.
   - Se o jogador já tiver jogado anteriormente, seu histórico será carregado. Caso contrário, um novo jogador será criado com pontuação inicial de 0.

2. **Menu**:
   - O jogador é apresentado a um menu onde pode escolher entre batalhar, ver o ranking ou alterar a dificuldade.

3. **Batalha**:
   - O jogador escolhe seu Pokémon inicial.
   - A batalha ocorre em turnos, onde o jogador e a CPU se alternam entre atacar ou trocar de Pokémon.
   - O vencedor ganha pontos, e o ranking é atualizado.

4. **Ranking**:
   - Após a batalha, o ranking de jogadores é atualizado com a pontuação do vencedor.
   - O ranking pode ser visualizado a qualquer momento pelo jogador.

### Como Executar o Programa

Para executar o programa, siga os passos abaixo:

1. **Compilar o Código**
   - Abra o terminal na pasta onde o código está localizado.
   - Compile o programa utilizando o comando `make`. Isso irá compilar todos os arquivos fonte e gerar o executável `main`.
     ```bash
     make
     ```
   - Se você desejar limpar os arquivos objetos gerados durante a compilação, use o comando `make clean`.
     ```bash
     make clean
     ```

2. **Executar o Jogo**
   - Após a compilação, execute o programa com o seguinte comando:
     ```bash
     ./main
     ```
   - O programa irá solicitar que você digite seu nickname. Após isso, o menu principal será exibido.
   - Você poderá escolher entre iniciar uma batalha, ver o ranking ou sair do jogo.

3. **Interação Durante o Jogo**
   - Durante a batalha, você poderá escolher entre atacar com seu Pokémon ou trocar de Pokémon.
   - O jogo termina quando todos os Pokémon do jogador ou da CPU forem derrotados. O jogador ganha pontos baseados na dificuldade do jogo e o ranking é atualizado.

### Componentes de Arquivos

- **ranking.txt**: Arquivo que armazena o ranking de jogadores. Cada linha contém o nickname do jogador, sua pontuação, vitórias e derrotas.
- **Arquivos fonte**: O código do programa está distribuído em vários arquivos `.cpp` e `.h`:
  - `main.cpp`: Contém o ponto de entrada do programa.
  - `jogo.cpp`, `jogo.h`: Contém a implementação da lógica do jogo, batalhas e ranking.
  - `pokemon.cpp`, `pokemon.h`: Contém a implementação da classe Pokémon e dos ataques.
  - `utils.cpp`, `utils.h`: Contém funções auxiliares para cálculos e verificações durante o jogo.

### Conclusão

O programa implementa uma experiência simples de batalha Pokémon com interatividade através de um menu no terminal. O jogador escolhe seus Pokémon e realiza batalhas contra a CPU, com a pontuação sendo acumulada e registrada no ranking. O código utiliza conceitos de programação orientada a objetos para modelar Pokémon, ataques e jogadores, além de gerenciar o fluxo de batalha e ranking de forma eficaz.

#### **Observação:** Este programa foi criado para um trabalho do curso de Ciência da Computação da Universidade Federal de Mato Grosso, disciplina de Programação II, em C++. Existe um relatório detalhando todo o processo de criação, disponível para consulta.
#### Para mais informações, entre em contato pelo email: cavalcanti.c.raissa@gmail.com 
