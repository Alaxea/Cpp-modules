/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 18:14:43 by alicja            #+#    #+#             */
/*   Updated: 2025/02/16 14:28:28 by alicja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
/*"index" – Numer identyfikacyjny konta lub pozycji.
"amount" – Stan konta w danym momencie (kwota).
"deposits" – Liczba depozytów (wpłat).
"withdrawals" – Liczba wypłat.
"p_amount" – Kwota wycofana (np. kwota próby wypłaty).
"withdrawal" – Informacja o wykonaniu lub odmowie wypłaty.
"nb_withdrawals" – Liczba wypłat (jeśli występuje).*/

//setters
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void)
{
    return (_nbAccounts);
}
int Account::getTotalAmount(void)
{
    return (_totalAmount);
}
int Account::getNbDeposits(void)
{
    return (_totalNbDeposits);
}
int Account::getNbWithdrawals(void)
{
    return (_totalNbWithdrawals);
}
//info about every account
void Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount
                << ";deposits:" << _totalNbDeposits << ";withdrawals:" 
                << _totalNbWithdrawals << std::endl;
}
//constructor
Account::Account(int initial_deposit)
{
    _nbAccounts++;
    _accountIndex = _nbAccounts - 1;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _totalAmount += _amount;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
                << ";amount:" << _amount
                << ";created" << std::endl;

}
//destructor
Account::~Account(void)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
                << ";amount:" << _amount
                << ";closed" << std::endl;
}

void Account::makeDeposit(int deposit)
{
    _nbDeposits++;
    _totalAmount += deposit;
    _totalNbDeposits++;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
                << ";p_amount:" << _amount
                << ";deposit:" << deposit
                << ";amount:" << _amount + deposit
                << ";nb_deposits:" << _nbDeposits
                << std::endl;
}
/*check if the balance allows the withdrawal;
if so, decrease _amount and increase _nbWithdrawals*/
bool Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    if (_amount - withdrawal > 0)
    {
        _nbWithdrawals++;
        _totalNbWithdrawals++;
        _totalAmount -= withdrawal;
        std::cout << "index:" << _accountIndex
                    << ";p_amount:" << _amount
                    << ";withdrawal:" << withdrawal
                    << ";amount:" << _amount - withdrawal
                    << ";nb_withdrawals:" << _nbWithdrawals
                    << std::endl;
        _amount -= withdrawal;
        return (true);
    }
    else
    {
        std::cout << "index:" << _accountIndex
                    << ";p_amount:" << _amount
                    << ";withdrawal:" << _nbWithdrawals
                    << ";refused"
                    << std::endl;
        return (false);
    }
}

int Account::checkAmount(void) const
{
    return (_amount);
}
/*print the account status
(balance, number of deposits, number of withdrawals)*/
void Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
                << ";amount:" << _amount
                << ";deposits:" << _nbDeposits
                << ";withdrawal:" << _nbWithdrawals
                << std::endl;
}

void Account::_displayTimestamp(void)
{
    std::time_t time = std::time(0);
    std::cout << "[" << std::setw(2)
                << std::localtime(&time)->tm_year + 1900
                << std::setw(2)
                << std::setfill('0')
                << std::localtime(&time)->tm_mon
                << std::setw(2)
                << std::localtime(&time)->tm_mday
                << "_"
                << std::setw(2)
                << std::localtime(&time)->tm_hour
                << std::setw(2)
                << std::localtime(&time)->tm_min
                << std::setw(2)
                << std::localtime(&time)->tm_sec
                << "]" << std::endl;
}