CREATE TABLE `all_score` (
  `all_score_id` varchar(50) PRIMARY KEY NOT NULL,
  `teame_id` int(5),
  `score_id` int(5)
);

CREATE TABLE `user` (
  `ID` int(5) PRIMARY KEY AUTO_INCREMENT,
  `Username` varchar(50) NOT NULL,
  `Password` varchar(200) NOT NULL,
  `Firstname` varchar(100) NOT NULL,
  `Lastname` varchar(100) NOT NULL,
  `Userlevel` varchar(1) NOT NULL
);

CREATE TABLE `teame` (
  `ID` int(5) PRIMARY KEY AUTO_INCREMENT,
  `t_name` varchar(50) NOT NULL,
  `t_point` int(10) NOT NULL,
  `t_pay` int(10) NOT NULL,
  `t_balance` varchar(100) NOT NULL
);

CREATE TABLE `score` (
  `ID` int(5) PRIMARY KEY AUTO_INCREMENT,
  `t_name` varchar(50) NOT NULL,
  `score1` int(10) NOT NULL,
  `score2` int(10) NOT NULL,
  `score3` int(10) NOT NULL
);

ALTER TABLE `all_score` ADD FOREIGN KEY (`teame_id`) REFERENCES `teame` (`ID`);

ALTER TABLE `all_score` ADD FOREIGN KEY (`score_id`) REFERENCES `score` (`ID`);
