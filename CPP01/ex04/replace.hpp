#ifndef REPLACE_H
# define REPLACE_H

# include <string>
# include <iostream>
# include <fstream>
# include <cstdlib>

class	Replace {

public:
		Replace(std::string av1, std::string av2, std::string av3);
		~Replace(void);

		void	replace(void);

private:

		std::ifstream	ifs; //read_file;
		std::ofstream	ofs; //write_file;
		std::string		tab[3]; //filename | toReplace | replacement | new Filename
};

#endif
