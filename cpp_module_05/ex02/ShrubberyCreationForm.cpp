/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:38:18 by mabdelou          #+#    #+#             */
/*   Updated: 2022/10/12 16:01:23 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ShrubberyCreationForm.hpp"
# include <fstream>


std::string ShrubberyCreationForm::get_Target(void) const
{
    return (this->target);
}

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreation",145,137)
{
    this->target = "Umknown";
    std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreation",145,137)
{
    this->target = target;
    std::cout << "ShrubberyCreationForm parameter constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) : Form("ShrubberyCreation",145,137)
{
    this->target = obj.get_Target();
    std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator = (const ShrubberyCreationForm &obj)
{
    this->target = obj.get_Target();
    std::cout << "ShrubberyCreationForm copy assinment operator called" << std::endl;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm destructors called" << std::endl;
}


void ShrubberyCreationForm::execute(Bureaucrat const & executor)
{
    try
    {
        this->beSigned(executor);
    }
    catch (Form::GradeTooHighException & e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (Form::GradeTooLowException & e)
    {
        std::cout << e.what() << std::endl;
    }
    if(executor.executeForm(*this) == 0)
    {
        std::ofstream out_file(this->target+"_shrubbery");
        if(!out_file)
        {
            std::cout << "can't create or put in this file " << std::endl;
            return ;
        }
        out_file << "_______________________________________________________" << std::endl;
        out_file << "|                                                     |" << std::endl;
        out_file << "|                 _{\\ _{\\{\\/}/}/}__                   |" << std::endl;
        out_file << "|                 {/{/\\}{/{/\\}(\\}{/\\} _               |" << std::endl;
        out_file << "|                {/{/\\}{/{/\\}(_)\\}{/{/\\} _            |" << std::endl;
        out_file << "|             {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\}          |" << std::endl;
        out_file << "|            {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}           |" << std::endl;
        out_file << "|           _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}           |" << std::endl;
        out_file << "|          {/{/{\\{\\{\\(/}{\\{\\\\/}/}{\\}(_){\\/}\\}         |" << std::endl;
        out_file << "|          _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\}          |" << std::endl;
        out_file << "|         {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}         |" << std::endl;
        out_file << "|          {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}        |" << std::endl;
        out_file << "|           {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)         |" << std::endl;
        out_file << "|          {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/}         |" << std::endl;
        out_file << "|           {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}         |" << std::endl;
        out_file << "|             {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}         |" << std::endl;
        out_file << "|              (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)          |" << std::endl;
        out_file << "|                {/{/{\\{\\/}{/{\\{\\{\\(_)/}              |" << std::endl;
        out_file << "|                 {/{\\{\\{\\/}/}{\\{\\}//}                |" << std::endl;
        out_file << "|                  {){/ {\\/}{\\/} \\}\\}                 |" << std::endl;
        out_file << "|                  (_)  \\.-'.-/                       |" << std::endl;
        out_file << "|              __...--- |'-.-'| --...__               |" << std::endl;
        out_file << "|       _...--\"   -'    | '--'|   ' -  \"\"--..__       |" << std::endl;
        out_file << "|     -\"    ' .  . '    |.'-._| '  . .  '    .        |" << std::endl;
        out_file << "|     .  '-  '    .--'  | '-.'|    .  '  . '          |" << std::endl;
        out_file << "|              ' ..     |'-_.-|                       |" << std::endl;
        out_file << "|      .  '  .       _.-|-._ -|-._  .  '  .           |" << std::endl;
        out_file << "|                  .'   |'- .-|   '.                  |" << std::endl;
        out_file << "|      ..-'   ' .  '.   `-._.-A   .'  '  - .          |" << std::endl;
        out_file << "|       .-' '        '-._______.-'     '  .           |" << std::endl;
        out_file << "|            .      ~,                                |" << std::endl;
        out_file << "|        .       .   |\\   .    ' '-.                  |" << std::endl;
        out_file << "|        ___________/  \\____________                  |" << std::endl;
        out_file << "|       /                           \\                 |" << std::endl;
        out_file << "|      |        mabdelou here        |                |" << std::endl;
        out_file << "|      |                             |                |" << std::endl;
        out_file << "|       \\___________________________/                 |" << std::endl;
        out_file << "|_____________________________________________________|" << std::endl;
    }
}