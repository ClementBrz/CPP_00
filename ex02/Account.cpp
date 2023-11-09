/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbernaze <cbernaze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 08:59:05 by cbernaze          #+#    #+#             */
/*   Updated: 2023/10/23 13:22:52 by cbernaze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

//******************************************************************//
//						CONSTRUCTEUR & DESTRUCTEUR					//
//******************************************************************//

//Le constructeur affiche ca pour tout les comptes:
// [19920104_091532] index:0;amount:42;created
Account::Account( int initial_deposit )
{
	this->_accountIndex = t::_nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	t::_nbAccounts++;
	t::_totalAmount += initial_deposit;
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

//Le destructeur affiche ca pour tout les comptes:
// [19920104_091532] index:0;amount:47;closed
Account::~Account( void )
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

//******************************************************************//
//								METHODES							//
//******************************************************************//

 //Nombre total de comptes
int	Account::getNbAccounts( void )
{
	return (t::_nbAccounts);
}

 //Montants de tous les comptes additionnés
int	Account::getTotalAmount( void )
{
	return (t::_totalAmount);
}

//Nombre de dépots de tous les comptes additionnés
int	Account::getNbDeposits( void )
{
	return (t::_totalNbDeposits);
}

//Nombre de retraits de tous les comptes additionnés
int	Account::getNbWithdrawals( void )
{
	return (t::_totalNbWithdrawals);
}

// Account::displayAccountsInfos();
//Cette fonction affiche ca :
// [19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0
void Account::displayAccountsInfos( void )
{
	t::_displayTimestamp();
	std::cout << "accounts:" << t::getNbAccounts() << ";total:" << t::getTotalAmount()
			<< ";deposits:" << t::getNbDeposits() << ";withdrawals:" << t::getNbWithdrawals() << std::endl;
}

//makeDeposit affiche ca pour tous les comptes:
// [19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
void	Account::makeDeposit( int deposit )
{
	this->_amount += deposit;
	this->_nbDeposits++;
	t::_totalAmount += deposit;
	t::_totalNbDeposits++;
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount - deposit << ";deposit:" << deposit
			<< ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

//makeWithdrawal affiche ca pour tous les comptes:
//[19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1
// [19920104_091532] index:0;p_amount:47;withdrawal:refused
// si le montant du retrait est superieur a l'argent sur le compte alors le retrait est refusé
bool	Account::makeWithdrawal( int withdrawal )
{
	if (withdrawal > this->_amount)
	{
		this->_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount
					<< ";withdrawal:refused" << std::endl;
		return (false);
	}
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	t::_totalAmount += withdrawal;
	t::_totalNbWithdrawals++;
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount + withdrawal << ";withdrawal:" << withdrawal
			<< ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return (true);
}

//Fonction qui verifie qu'il y a assez pour faire un retrait, si la somme demandé est superieur a celle dispo, le retrait ne se fait pas
int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

//Account::displayStatus affiche ca pour tout les comptes:
// [19920104_091532] index:0;amount:42;deposits:0;withdrawals:0
void	Account::displayStatus( void ) const
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount
			<< ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

//fonction qui affiche le temps auquel une fonction a ete appelée
void	Account::_displayTimestamp( void )
{
	std::time_t	time = std::time(nullptr);
	std::tm *today = std::localtime(&time);
	std::cout << "[" << today->tm_year + 1900 << std::setw(2) << std::setfill('0') << today->tm_mon + 1
				<< std::setw(2) << std::setfill('0') << today->tm_mday << "_" << std::setw(2)
				<< std::setfill('0') << today->tm_hour << std::setw(2) << std::setfill('0') << today->tm_min
				<< std::setw(2) << std::setfill('0') << today->tm_sec << "] ";
}
