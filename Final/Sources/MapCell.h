#ifndef MAPCELL_H
#define MAPCELL_H

class MapCell {
	public:
		MapCell() {
			id = 0;
		}
		char id;

		bool IsBlocked() {
			if (id == '5')
				return true;
			else
				return false;
		}
	protected:

	private:
};

#endif // MAPCELL_H
