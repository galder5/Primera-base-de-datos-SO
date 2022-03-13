DROP DATABASE IF EXIST campeonato;
CREATE DATABASE campeonato;

CREATE TABLE Jugador(
identificador INT NOT NULL,
usuario VARCHAR(60),
password VARCHAR(60)
)ENGINE = InnoDB;

CREATE TABLE Partida(
identificador INT NOT NULL,
fecha INTEGER NOT NULL,
hora INTEGER NOT NULL,
duracion INTEGER NOT NULL,
ganador INT NOT NULL
)ENGINE = InnoDB;

CREATE TABLE Partidas(
Jugador INTEGER NOT NULL,
Partida INTEGER NOT NULL,
fecha INTEGER NOT NULL,
hora INTEGER NOT NULL,
FOREIGN KEY (Jugador) REFERENCES Jugador(Identificador),
FOREIGN KEY (Partida) REFERENCES Partida(Identificador)
)ENGINE = InnoDB;


SELECT Jugador.usuario FROM (Jugador, Partida, Partidas) WHERE
Partida.ganador = Jugador.usuario AND
Partidas.jugador = Partidas.Partida;







