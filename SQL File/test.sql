-- phpMyAdmin SQL Dump
-- version 5.0.2
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: May 05, 2020 at 02:16 PM
-- Server version: 10.4.11-MariaDB
-- PHP Version: 7.2.29

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `test`
--

-- --------------------------------------------------------

--
-- Table structure for table `tbl_score_hap_sal`
--

CREATE TABLE `tbl_score_hap_sal` (
  `team` varchar(50) NOT NULL,
  `pay` int(10) NOT NULL,
  `score1` int(10) NOT NULL,
  `score2` int(10) NOT NULL,
  `score3` int(10) NOT NULL
) ENGINE=MyISAM DEFAULT CHARSET=utf8;

--
-- Dumping data for table `tbl_score_hap_sal`
--

INSERT INTO `tbl_score_hap_sal` (`team`, `pay`, `score1`, `score2`, `score3`) VALUES
('Alpha Team', 15200, 620, 750, 954),
('Pokemon', 14900, 500, 600, 780),
('Aztecs', 14800, 580, 600, 1000),
('Bad Boys', 14800, 500, 1000, 7800),
('Alpha', 15200, 620, 750, 1230),
('Pokemon Go', 14900, 500, 600, 900),
('Aztecs One', 14800, 1200, 3000, 6000),
('Bad Boys Two', 14800, 500, 500, 958);

-- --------------------------------------------------------

--
-- Table structure for table `tbl_score_heart`
--

CREATE TABLE `tbl_score_heart` (
  `team` varchar(50) NOT NULL,
  `pay` int(10) NOT NULL,
  `score1` int(10) NOT NULL,
  `score2` int(10) NOT NULL,
  `score3` int(10) NOT NULL
) ENGINE=MyISAM DEFAULT CHARSET=utf8;

--
-- Dumping data for table `tbl_score_heart`
--

INSERT INTO `tbl_score_heart` (`team`, `pay`, `score1`, `score2`, `score3`) VALUES
('Alpha Team', 15200, 620, 750, 954),
('Pokemon', 14900, 500, 600, 780),
('Aztecs', 14800, 580, 2000, 8500),
('Bad Boys', 14800, 500, 500, 750),
('Alpha', 15200, 620, 750, 1230),
('Pokemon Go', 14900, 500, 600, 900),
('Aztecs One', 14800, 1200, 3000, 6000),
('Bad Boys Two', 14800, 500, 500, 958);

-- --------------------------------------------------------

--
-- Table structure for table `tbl_score_inf_stn`
--

CREATE TABLE `tbl_score_inf_stn` (
  `team` varchar(50) NOT NULL,
  `pay` int(10) NOT NULL,
  `score1` int(10) NOT NULL,
  `score2` int(10) NOT NULL,
  `score3` int(10) NOT NULL
) ENGINE=MyISAM DEFAULT CHARSET=utf8;

--
-- Dumping data for table `tbl_score_inf_stn`
--

INSERT INTO `tbl_score_inf_stn` (`team`, `pay`, `score1`, `score2`, `score3`) VALUES
('Alpha Team', 15200, 620, 750, 1250),
('Pokemon', 14900, 500, 600, 1320),
('Aztecs', 14800, 580, 600, 750),
('Bad Boys', 14800, 500, 500, 750),
('Alpha', 15200, 620, 750, 1230),
('Pokemon Go', 14900, 500, 600, 900),
('Aztecs One', 14800, 1200, 3000, 7500),
('Bad Boys Two', 14800, 500, 500, 958);

-- --------------------------------------------------------

--
-- Table structure for table `tbl_score_meg_pro`
--

CREATE TABLE `tbl_score_meg_pro` (
  `team` varchar(50) NOT NULL,
  `pay` int(10) NOT NULL,
  `score1` int(10) NOT NULL,
  `score2` int(10) NOT NULL,
  `score3` int(10) NOT NULL
) ENGINE=MyISAM DEFAULT CHARSET=utf8;

--
-- Dumping data for table `tbl_score_meg_pro`
--

INSERT INTO `tbl_score_meg_pro` (`team`, `pay`, `score1`, `score2`, `score3`) VALUES
('Alpha Team', 15200, 620, 750, 954),
('Pokemon', 14900, 500, 600, 780),
('Aztecs', 14800, 580, 600, 1000),
('Bad Boys', 14800, 500, 5890, 5500),
('Alpha', 15200, 620, 750, 1230),
('Pokemon Go', 14900, 500, 600, 900),
('Aztecs One', 14800, 1200, 3000, 6000),
('Bad Boys Two', 14800, 500, 500, 958);

-- --------------------------------------------------------

--
-- Table structure for table `tbl_score_you_love`
--

CREATE TABLE `tbl_score_you_love` (
  `team` varchar(50) NOT NULL,
  `pay` int(10) NOT NULL,
  `score1` int(10) NOT NULL,
  `score2` int(10) NOT NULL,
  `score3` int(10) NOT NULL
) ENGINE=MyISAM DEFAULT CHARSET=utf8;

--
-- Dumping data for table `tbl_score_you_love`
--

INSERT INTO `tbl_score_you_love` (`team`, `pay`, `score1`, `score2`, `score3`) VALUES
('Alpha Team', 15200, 620, 750, 954),
('Pokemon', 14900, 500, 600, 780),
('Aztecs', 14800, 580, 600, 1000),
('Bad Boys', 14800, 500, 500, 750),
('Alpha', 15200, 620, 750, 1230),
('Pokemon Go', 14900, 2000, 4500, 5890),
('Aztecs One', 14800, 1200, 3000, 6000),
('Bad Boys Two', 14800, 500, 500, 958);

-- --------------------------------------------------------

--
-- Table structure for table `user`
--

CREATE TABLE `user` (
  `ID` int(5) NOT NULL,
  `Username` varchar(50) NOT NULL,
  `Password` varchar(200) NOT NULL,
  `Firstname` varchar(100) NOT NULL,
  `Lastname` varchar(100) NOT NULL,
  `Userlevel` varchar(1) NOT NULL
) ENGINE=MyISAM DEFAULT CHARSET=utf8;

--
-- Dumping data for table `user`
--

INSERT INTO `user` (`ID`, `Username`, `Password`, `Firstname`, `Lastname`, `Userlevel`) VALUES
(1, 'aaa', 'aaa', 'Admin', 'A', 'A'),
(2, 'bbb', 'bbb', 'Admin', 'B', 'A'),
(7, 'ccc', 'ccc', 'User', 'C', 'M');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `tbl_score_hap_sal`
--
ALTER TABLE `tbl_score_hap_sal`
  ADD PRIMARY KEY (`team`);

--
-- Indexes for table `tbl_score_heart`
--
ALTER TABLE `tbl_score_heart`
  ADD PRIMARY KEY (`team`);

--
-- Indexes for table `tbl_score_inf_stn`
--
ALTER TABLE `tbl_score_inf_stn`
  ADD PRIMARY KEY (`team`);

--
-- Indexes for table `tbl_score_meg_pro`
--
ALTER TABLE `tbl_score_meg_pro`
  ADD PRIMARY KEY (`team`);

--
-- Indexes for table `tbl_score_you_love`
--
ALTER TABLE `tbl_score_you_love`
  ADD PRIMARY KEY (`team`);

--
-- Indexes for table `user`
--
ALTER TABLE `user`
  ADD PRIMARY KEY (`ID`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `user`
--
ALTER TABLE `user`
  MODIFY `ID` int(5) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=8;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
