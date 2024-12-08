/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:41:04 by mkoualil          #+#    #+#             */
/*   Updated: 2024/12/06 21:19:32 by mkoualil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>


void replaceOccurrences(std::string& content, const std::string s1, const std::string s2) {
    size_t pos = 0;
    while ((pos = content.find(s1, pos)) != std::string::npos)
    {
        content.erase(pos, s1.length());
        content.insert(pos, s2);
        pos += s2.length(); 
    }
}

int main(int argc, char const *argv[])
{
    if (argc != 4)
    {
        std::cout << "You must enter a filename and two strings, s1 and s2." << std::endl;
        return 1;
    }
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::string line;
    std::string content;
    bool is_empty_file = true;
    if (s1.empty())
    {
        std::cerr << "Error: The string to be replaced (s1) or (s2) cannot be empty." << std::endl;
        return 1;
    }

    std::ifstream myfile(filename.c_str());
    if (myfile.is_open())
    {
        while (getline(myfile, line))
        {
            content += line + "\n";
            is_empty_file = false;
        }
        if (is_empty_file)
        {
            std::cout << "No content to replace." << std::endl;
            return 1;
        }
        myfile.close();
        replaceOccurrences(content, s1, s2);
        std::ofstream outputFile(((filename + ".replace").c_str()));
        if(!outputFile.is_open())
        {
            std::cerr << "Error: Could not create output file " << filename << ".replace" << std::endl;
            return 1;
        }
        outputFile << content;
        outputFile.close();
    }
    else
    {
        std::cerr << "Unable to open file" << std::endl;
        return 1;
    }

    
    return 0;
}
