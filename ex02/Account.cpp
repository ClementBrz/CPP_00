/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbernaze <cbernaze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 08:59:05 by cbernaze          #+#    #+#             */
/*   Updated: 2023/10/22 10:12:03 by cbernaze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

//******************************************************************//
//						CONSTRUCTEUR & DESTRUCTEUR					//
//******************************************************************//

//Le constructeur affiche ca pour tout les comptes:
// [19920104_091532] index:0;amount:42;created
Account::Account( int initial_deposit )
{
	Account::_nbAccounts++;
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
	return (Account::_nbAccounts);
}

 //Montants de tous les comptes additionnés
int	Account::getTotalAmount( void )
{

}

//Nombre de dépots de tous les comptes additionnés
int	Account::getNbDeposits( void )
{

}

//Nombre de retraits de tous les comptes additionnés
int	Account::getNbWithdrawals( void )
{

}

// Account::displayAccountsInfos();
//Cette fonction affiche ca :
// [19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0
void Account::displayAccountsInfos( void )
{
	t::_displayTimestamp();
	std::cout << "index:" << t::getNbAccounts << ";amount:" << t::getTotalAmount
			<< ";deposits:" << t::getNbDeposits << ";withdrawals:" << t::getNbWithdrawals << std::endl;
}

//makeDeposit affiche ca pour tous les comptes:
// [19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
void	Account::makeDeposit( int deposit )
{
	this->_amount += deposit;
	this->_nbDeposits++;
}

//makeWithdrawal affiche ca pour tous les comptes:
// [19920104_091532] index:0;p_amount:47;withdrawal:refused
// si le montant du retrait est superieur a l'argent sur le compte alors le retrait est refusé
bool	Account::makeWithdrawal( int withdrawal )
{
	if (withdrawal > this->_amount)
		return (false);
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	return (true);
}

//Fonction qui verifie qu'il y a assez pour faire un retrait, si la somme demandé est superieur a celle dispo, le retrait ne se fait pas
int		Account::checkAmount( void ) const
{

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

}
