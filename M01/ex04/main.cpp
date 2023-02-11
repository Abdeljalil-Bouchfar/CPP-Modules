#include <iostream>
#include <string>
#include <fstream>

int replace(char **av)
{
	std::string in_filename = av[1];
	std::string out_filename = in_filename + ".replace";
	std::string s1 = av[2];
	std::string s2 = av[3];
	if (!in_filename.empty())
	{
		std::ifstream infile(in_filename);
		std::ofstream outfile(out_filename);
		std::string content;
		if (infile.is_open() && outfile.is_open())
		{
			while (std::getline(infile, content))
			{
				int i = content.find(s1);
				while (i != -1)
				{
					content.erase(i, s1.length());
					content.insert(i, s2);
					i = content.find(s1, i + s2.length());
				}
				outfile << content << std::endl;
			}
			infile.close();
			outfile.close();
		}
		else
		{
			std::cerr << "Faild to open infile" << std::endl;
			return (1);
		}
	}
	else
	{
		std::cerr << "Invalid filename" << std::endl;
		return (1);
	}
	return (0);
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Invalid number of argements!" << std::endl;
		return (1);
	}
	return replace(av);
}
