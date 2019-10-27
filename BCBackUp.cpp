#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

bool TwoLegs{ true };
string Color{};
bool isRanged{ true };
bool isYordle{ true };
bool hasHair{ true };
bool isShapeShift{ true };
bool isFemale{ true };
bool isMarksman{ true };
bool hasNoWeapon{ true };

bool AskIsRanged() {
	cout << "Is your champion a ranged champion?" << endl;
	cout << "'yes' or 'no'" << endl;
	string r1;
	cin >> r1;
	if (r1 == "yes") {
		isRanged = true;
		return isRanged;
	}
	else {
		isRanged = false;
		return isRanged;
	}
}

bool AskIsShapeShift() {
	cout << "Can your champion shape shift or turn into a different form?" << endl;
	cout << "'yes' or 'no'" << endl;
	string r3;
	cin >> r3;
	if (r3 == "yes") {
		isShapeShift = true;
		return isShapeShift;
	}
	else {
		isShapeShift = false;
		return isShapeShift;
	}
}

bool AskIsFemale() {
	cout << "Is your champion male or female?" << endl;
	cout << "'male' or 'female'" << endl;
	string r4;
	cin >> r4;
	if (r4 == "male") {
		isFemale = false;
		return isFemale;
	}
	else {
		isFemale = true;
		return isFemale;
	}
}

bool AskIsYordle() {
	cout << "Is your champion a yordle or is short like one?" << endl;
	cout << "'yes' or 'no'" << endl;
	string r5;
	cin >> r5;
	if (r5 == "yes") {
		isYordle = true;
		return isYordle;

	}
	else {
		isYordle = false;
		return isYordle;
	}
}

bool AskIsMarskman() {
	cout << "Is your champion classified as a marksman?" << endl;
	cout << "'yes' or 'no'" << endl;
	string r6;
	cin >> r6;
	if (r6 == "yes") {
		isMarksman = true;
		return isMarksman;

	}
	else {
		isMarksman = false;
		return isMarksman;
	}
}

bool AskHasWeapon() {
	cout << "Does your champion usually fight with their bare hands/body (or does not use a weapon)?" << endl;
	cout << "'yes' or 'no'" << endl;
	string r7;
	cin >> r7;
	if (r7 == "yes") {
		hasNoWeapon = true;
		return hasNoWeapon;

	}
	else {
		hasNoWeapon = false;
		return hasNoWeapon;
	}
}


int main() {
	cout << "Champion guesser 1.0 by Nikkone. Think of a champion and Blitzcrank try to guess it within 12 questions." << endl;
	cout << "Valid answer options will be displayed on the screen. Invalid answers will not be recognized by the Blitzcrank." << endl;
	Sleep(1000);

	/*cout << "Now loading..." << endl;
	Sleep(5500);*/

	cout << "Does your champion walk on two legs?" << endl;
	cout << "'yes' or 'no'" << endl;
	string r2;
	cin >> r2;
	if (r2 == "yes") {
		TwoLegs = true;
		AskIsRanged();
		if (isRanged == true) {
			string isFemaleU{};
			cout << "Is your champion male or female?" << endl;
			cout << "'male', or 'female'" << endl;
			cin >> isFemaleU;
			if (isFemaleU == "female") {
				AskIsShapeShift();
				if (isShapeShift == true) {
					string spider;
					cout << "Can your champion turn into a spider?" << endl;
					cout << "'yes' or 'no'" << endl;
					cin >> spider;
					if (spider == "yes") {
						cout << "Your champion is Elise!" << endl;
						system("pause");

					}
					else {
						AskIsMarskman();
							if (isMarksman == true) {
								cout << "Your champion is Quinn!" << endl;
								system("pause");
							}
							else {
								string neeko2;
								cout << "Can your champion turn into other champions?" << endl;
								cout << "'yes' or 'no'" << endl;
								cin >> neeko2;
								if (neeko2 == "yes") {
									cout << "Your champion is Neeko!" << endl;
									system("pause");
								}
								if (neeko2 == "no") {
									cout << "Your champion is Nidalee!" << endl;
									system("pause");
								}
							}
					}
				}
				else {
					AskIsYordle();
					if (isYordle == true) {
						string fire;
						cout << "Does your champion hold a stuffed bear?" << endl;
						cout << "'yes' or 'no'" << endl;
						cin >> fire;
						if (fire == "yes") {
							cout << "Your champion is Annie!" << endl;
							system("pause");
						}
						if (fire == "no") {
							string purplehair;
							cout << "Is your champion purple or has purple hair?" << endl;
							cout << "'yes' or 'no'" << endl;
							cin >> purplehair;
							if (purplehair == "yes") {
								string petfairy;
								cout << "Does your champion have a pet fairy named Pix?" << endl;
								cout << "'yes' or 'no'" << endl;
								cin >> petfairy;
								if (petfairy == "yes") {
									cout << "Your champion is Lulu!" << endl;
									system("pause");
								}
								if (petfairy == "no") {
									string yuu;
									cout << "Does your champion have a very large gun?" << endl;
									cout << "'yes' or 'no'" << endl;
									cin >> yuu;
									if (yuu == "yes") {
										cout << "Your champion is Tristana!" << endl;
										system("pause");
									}
									if (yuu == "no") {
										cout << "Your champion is Yuumi!" << endl;
										system("pause");
									}
								}
							}
							if (purplehair == "no") {
								string kindredCatch;
								cout << "Is your champion actually two champions?" << endl;
								cout << "'yes' or 'no'" << endl;
								cin >> kindredCatch;
								if (kindredCatch == "yes") {
									cout << "Your champion is Kindred!" << endl;
									system("pause");
								}
								if (kindredCatch == "no") {
									string Trist;
									cout << "Does your champion have a very large gun?" << endl;
									cout << "'yes' or 'no'" << endl;
									cin >> Trist;
									if (Trist == "yes") {
										cout << "Your champion is Tristana!" << endl;
										system("pause");
									}
									if (Trist == "no") {
										cout << "Your champion is Zoe!" << endl;
										system("pause");
									}
								}
								}
							}
						}
					}
					if (isYordle == false) {
						AskIsMarskman();
						if (isMarksman == true) {
							string wep;
							cout << "Does your champion shoot arrows or bullets?" << endl;
							cout << "'yes', or 'no'" << endl;
							cin >> wep;
							if (wep == "yes") { 
								string bow;
								cout << "Does your champion use a gun or do they use a bow?" << endl;
								cout << "'gun' or 'bow'" << endl;
								cin >> bow;
								if (bow == "bow") {
									string archer;
									cout << "Is your champion a frost archer?" << endl;
									cout << "'yes' or 'no'" << endl;
									cin >> archer;
									if (archer == "yes") {
										cout << "I'm guessing your champion is Ashe." << endl;
										system("pause");
									}
									if (archer == "no") {
										string kindred;
										cout << "Is your champion comprised of two champions?." << endl;
										cout << "'yes' or 'no'" << endl;
										if (kindred == "yes") {
											cout << "Your champion is Kindred." << endl;
											system("pause");
										}
										if (kindred == "no") {
											cout << "Your champion is Vayne." << endl;
											system("pause");
										}
									}
								}
							
								if (bow == "gun") {
									string crazy;
									cout << "Is your champion deranged or crazy?" << endl;
									cout << "'yes' or 'no'" << endl;
									cin >> crazy;
									if (crazy == "yes") {
										string mf;
										cout << "Is your champion a pirate?" << endl;
										cout << "'yes' or 'no'" << endl;
										cin >> mf;
										if (mf == "yes") {
											cout << "It's Miss Fortune!" << endl;
											system("pause");
										}
										if (mf == "no") {
											cout << "It's Jinx." << endl;
											system("pause");
										}
									}
									if (crazy == "no") {
										string mf;
										cout << "Is your champion a pirate?" << endl;
										cout << "'yes' or 'no'" << endl;
										cin >> mf;
										if (mf == "yes") {
											cout << "It's Miss Fortune!" << endl;
											system("pause");
										}
										if (mf == "no") {
											cout << "It's Caitlyn." << endl;
											system("pause");
										}
									}
								}
							}
							if (wep == "no") {
								string pclothes;
								cout << "Does your champion wear purple clothes?" << endl;
								cout << "'yes' or 'no'" << endl;
								cin >> pclothes;
								if (pclothes == "yes") {
									string feathers;
									cout << "Does your champion shoot feathers?" << endl;
									cout << "'yes' or 'no'" << endl;
									cin >> feathers;
									if (feathers == "yes") {
										cout << "It's Xayah." << endl;
										system("pause");
									}
									if (feathers == "no") {
										cout << "You picked Kai'Sa." << endl;
										system("pause");
									}
								}
								if (pclothes == "no") {
									string boomerang;
									cout << "Does your champion have a boomerang as their weapon?" << endl;
									cout << "'yes' or 'no'" << endl;
									cin >> boomerang;
									if (boomerang == "yes") {
										cout << "Your champion is Sivir!" << endl;
										system("pause");
									}
									if (boomerang == "no") {
										cout << "Your champion is Kalista!" << endl;
										system("pause");
									}
								}
							}
						}
						if (isMarksman == false) {
							string shield;
							cout << "Does your champion have the ability to shield or heal others?" << endl;
							cout << "'yes' or 'no'" << endl;
							cin >> shield;
							if (shield == "yes") {
								string root;
								cout << "Does your champion have a root ability?" << endl;
								cout << "'yes' or 'no'" << endl;
								cin >> root;
								if (root == "no") {
									string orianna;
									cout << "Is your champion a robot?" << endl;
									cout << "'yes' or 'no'" << endl;
									cin >> orianna;
									if (orianna == "yes") {
										cout << "Your champion is Orianna!" << endl;
										system("pause");
									}
									if (orianna == "no") {
										string sona;
										cout << "Is your champion involved with music?" << endl;
										cout << "'yes' or 'no'" << endl;
										cin >> sona;
										if (sona == "yes") {
											cout << "Your champion is Sona!" << endl;
											system("pause");
										}
										if (sona == "no") {
											cout << "Your champion is Janna!" << endl;
											system("pause");
										}
									}
								}
								if (root == "yes") {
									string ispurple;
									cout << "Is your champion purple?" << endl;
									cout << "'yes' or 'no'" << endl;
									cin >> ispurple;
									if (ispurple == "yes"){
										string morgana;
										cout << "Does your champion have wings?" << endl;
										cout << "'yes' or 'no'" << endl;
										cin >> morgana;
										if (morgana == "yes") {
											cout << "Your champion is Morgana!" << endl;
											system("pause");
										}
										if (morgana == "no") {
											cout << "Your champion is Soraka!" << endl;
											system("pause");
										}
									}
									if (ispurple == "no") {
										string karma;
										cout << "Does your champion have dark skin?" << endl;
										cout << "'yes' or 'no'" << endl;
										cin >> karma;
										if (karma == "yes") {
											cout << "That was a tough one. I think it's Karma." << endl;
											system("pause");
											}
										if (karma == "no") {
											cout << "Your champion is Lux." << endl;
											system("pause");
											}
									}
								}
							}
							if (shield == "no") {
								string root2;
								cout << "Does your champion have a root ability?" << endl;
								cout << "'yes' or 'no'" << endl;
								cin >> root2;
								if (root2 == "yes") {
									string nature;
									cout << "Is your champion involved with nature or plants?" << endl;
									cout << "'yes' or 'no'" << endl;
									cin >> nature;
									if (nature == "yes") {
										string neeko;
										cout << "Can your champion turn into other champions?" << endl;
										cout << "'yes' or 'no'" << endl;
										cin >> neeko;
										if (neeko == "yes") {
											cout << "Your champion is Neeko!" << endl;
											system("pause");
										}
										if (neeko == "no") {
											cout << "Your champion is Zyra!" << endl;
											system("pause");
										}
									}
									if (nature == "no") {
										string lissandra;
										cout << "Is your champion ice themed?" << endl;
										cout << "'yes' or 'no'" << endl;
										cin >> lissandra;
										if (lissandra == "yes") {
											cout << "Your champion is Lissandra!" << endl;
											system("pause");
										}
										if (lissandra == "no") {
											cout << "That was a tough one, but I think your champion is LeBlanc." << endl;
											system("pause");
										}
									}
								}
								if (root2 == "no") {
									string darkblack;
									cout << "Does your champion have dark black hair?" << endl;
									cout << "'yes' or 'no'" << endl;
									cin >> darkblack;
									if (darkblack == "yes") {
										cout << "Your champion is Ahri!" << endl;
										system("pause");
									}
									if (darkblack == "no") {
										string syndra;
										cout << "Does your champion have long flowing silver hair?" << endl;
										cout << "'yes' or 'no'" << endl;
										cin >> syndra;
										if (syndra == "yes") {
											cout << "I found it! Your champion is Syndra!" << endl;
											system("pause");
										}
										if (syndra == "no") {
											cout << "I think your champion is Taliyah." << endl;
											system("pause");
										}
									}
								}
							}
						}
					}
			}
			if (isFemaleU == "male") {
				AskIsShapeShift();
				if (isShapeShift == true) {
					AskIsYordle();
					if (isYordle == true) {
						cout << "Your champion is Gnar!" << endl;
						system("pause");
					}
					if (isYordle == false) { //May need to put swain and a few other champions here.
						string SwainCatch;
						cout << "Can your champion turn into a demon at level 6?" << endl;
						cout << "'yes' or 'no'" << endl;
						cin >> SwainCatch;
						if (SwainCatch == "yes") {
							cout << "Your champion is Swain." << endl;
							system("pause");
						}
						if (SwainCatch == "no") {
							cout << "Your champion is Jayce" << endl;
							system("pause");
						}
					}
				}
				if (isShapeShift == false) {
					string stunorsupp1;
					cout << "Does your champion have a stun or suppression?" << endl;
					cout << "'yes' or 'no'" << endl;
					cin >> stunorsupp1;
					if (stunorsupp1 == "yes") {
						string maskHat;
						cout << "Does your champion wear a mask or hat?" << endl;
						cout << "'yes' or 'no'" << endl;
						cin >> maskHat;
						if (maskHat == "yes") {
							string ele;
							cout << "Does your champion have an ability that shoots or uses lightning/electricity?" << endl;
							cout << "'yes' or 'no'" << endl;
							cin >> ele;
							if (ele == "yes") {
								string kennen;
								cout << "Is your champion a yordle or short like one?" << endl;
								cout << "'yes' or 'no'" << endl;
								cin >> kennen;
								if (kennen == "yes") {
									cout << "Your champion is Kennen." << endl;
									system("pause");
								}
								if (kennen == "no") {
									string viktor;
									cout << "Does your champion have a robotic third arm?" << endl;
									cout << "'yes' or 'no'" << endl;
									cin >> viktor;
									if (viktor == "yes") {
										cout << "Your champion is Viktor." << endl;
										system("pause");
									}
									if (viktor == "no") {
										cout << "Your champion is Xerath." << endl;
										system("pause");
									}
								}
							}
							if (ele == "no") {
								string pickup;
								cout << "Does your champion's passive require them to walk over things and pick them up?" << endl;
								cout << "'yes' or 'no'" << endl;
								cin >> pickup;
								if (pickup == "yes") {
									string thresh;
									cout << "Does your champion have a chain?" << endl;
									cout << "'yes' or 'no'" << endl;
									cin >> thresh;
									if (thresh == "yes") {
										cout << "Your champion is Thresh." << endl;
										system("pause");
									}
									if (thresh == "no") {
										cout << "Your champion is Bard." << endl;
										system("pause");
									}
								}
								if (pickup == "no") {
									string tf;
									cout << "Does your champion throw cards?" << endl;
									cout << "'yes' or 'no'" << endl;
									cin >> tf;
									if (tf == "yes") {
										cout << "Your champion is Twisted Fate." << endl;
										system("pause");
									}
									if (tf == "no") {
										string malz;
										cout << "Does your champion summon Voidlings?" << endl;
										cout << "'yes' or 'no'" << endl;
										cin >> malz;
										if (malz == "yes") {
											cout << "Your champion is Malzahar." << endl;
											system("pause");
										}
										if (malz == "no") {
											cout << "Your champion is Veigar." << endl;
											system("pause");
										}
									}
								}
							}
						}
						if (maskHat == "no") {
							string elec;
							cout << "Does your champion float when they move?" << endl;
							cout << "'yes' or 'no'" << endl;
							cin >> elec;
							if (elec == "yes") {
								string kennen;
								cout << "Does your champion's ult deal damage?" << endl;
								cout << "'yes' or 'no'" << endl;
								cin >> kennen;
								if (kennen == "yes") {
									string thresh;
									cout << "Does your champion collect souls?" << endl;
									cout << "'yes' or 'no'" << endl;
									cin >> thresh;
									if (thresh == "yes") {
										cout << "Your champion is Thresh." << endl;
										system("pause");
									}
									if (thresh == "no") {
										cout << "Your champion is Xerath." << endl;
										system("pause");
									}
								}
								if (kennen == "no") {
									string viktor;
									cout << "Does your champion have a revive ultimate?" << endl;
									cout << "'yes' or 'no'" << endl;
									cin >> viktor;
									if (viktor == "yes") {
										cout << "Your champion is Zilean." << endl;
										system("pause");
									}
									if (viktor == "no") {
										cout << "Your champion is Bard." << endl;
										system("pause");
									}
								}
							}
							if (elec == "no") {
								string hair3;
								cout << "Does your champion have hair?" << endl;
								cout << "'yes' or 'no'" << endl;
								cin >> hair3;
								if (hair3 == "yes") {
									string heimer;
									cout << "Does your champion summon turrets?" << endl;
									cout << "'yes' or 'no'" << endl;
									cin >> heimer;
									if (heimer == "yes") {
										cout << "Your champion is Heimerdinger." << endl;
										system("pause");
									}
									if (heimer == "no") {
										cout << "Your champion is Rakan." << endl;
										system("pause");
									}
								}
								if (hair3 == "no") {
									string brand;
									cout << "Is your champion currently on fire?" << endl;
									cout << "'yes' or 'no'" << endl;
									cin >> brand;
									if (brand == "yes") {
										cout << "Your champion is Brand." << endl;
										system("pause");
									}
									if (brand == "no") {
										cout << "Your champion is Thresh." << endl;
										system("pause");
									}
								}
							}
						}
					}
					if (stunorsupp1 == "no") {
						string isMarksman;
						cout << "Is your champion considered a marksman?" << endl;
						cout << "'yes' or 'no'" << endl;
						cin >> isMarksman;
						if (isMarksman == "yes") {
							string dashstealth;
							cout << "Does your champion have a dash or stealth?" << endl;
							cout << "'yes' or 'no'" << endl;
							cin >> dashstealth;
							if (dashstealth == "yes") {
								string bow;
								cout << "Does your champion have a bow?" << endl;
								cout << "'yes' or 'no'" << endl;
								cin >> bow;
								if (bow == "yes") {
									string twitch;
									cout << "Is your champion a rat?" << endl;
									cout << "'yes' or 'no'" << endl;
									cin >> twitch;
									if (twitch == "yes") {
										cout << "Your champion is Twitch." << endl;
										system("pause");
									}
									if (twitch == "no") {
										cout << "Your champion is Ezreal." << endl;
										system("pause");
									}
								}
								if (bow == "no") {
									string corki;
									cout << "Does your champion ride a vehicle?" << endl;
									cout << "'yes' or 'no'" << endl;
									cin >> corki;
									if (corki == "yes") {
										cout << "Your champion is Corki." << endl;
										system("pause");
									}
									if (corki == "no") {
										cout << "Your champion is Lucian." << endl;
										system("pause");
									}
								}
							}
							if (dashstealth == "no") {
								string bowgun;
								cout << "Does your champion use a bow or gun?" << endl;
								cout << "'yes' or 'no'" << endl;
								cin >> bowgun;
								if (bowgun == "yes") {
									string jhin;
									cout << "Does your champion place traps?" << endl;
									cout << "'yes' or 'no'" << endl;
									cin >> jhin;
									if (jhin == "yes") {
										cout << "Your champion is Jhin." << endl;
										system("pause");
									}
									if (jhin == "no") {
										cout << "Your champion is Varus" << endl;
										system("pause");
									}
								}
								if (bowgun == "no") {
									string draven;
									cout << "Does your champion have a mustache?" << endl;
									cout << "'yes' or 'no'" << endl;
									cin >> draven;
									if (draven == "yes") {
										cout << "Your champion is Draven." << endl;
										system("pause");
									}
									if (draven == "no") {
										cout << "Your champion is Kog'Maw." << endl;
										system("pause");
									}
								}
							}
						}
						if (isMarksman == "no") {
							string charm;
							cout << "Does your champion have a root, fear, or charm?" << endl;
							cout << "'yes' or 'no'" << endl;
							cin >> charm;
							if (charm == "yes") {
								string tpult;
								cout << "Can your champion teleport with their ult?" << endl;
								cout << "'yes' or 'no'" << endl;
								cin >> tpult;
								if (tpult == "yes") {
									string fiddle;
									cout << "Is your champion a Scarecrow?" << endl;
									cout << "'yes' or 'no'" << endl;
									cin >> fiddle;
									if (fiddle == "yes") {
										cout << "Your champion is Fiddlesticks. A very well designed champion, might I add." << endl;
										system("pause");
									}
									if (fiddle == "no") {
										cout << "Your champion is Ryze." << endl;
										system("pause");
									}
								}
								if (tpult == "no") {
									string swain;
									cout << "Does your champion turn into a demon with their ult?" << endl;
									cout << "'yes' or 'no'" << endl;
									cin >> swain;
									if (swain == "yes") {
										cout << "Your champion is Swain." << endl;
										system("pause");
									}
									if (swain == "no") {
										cout << "Your champion is Rakan." << endl;
										system("pause");
									}
								}
							}
							if (charm == "no") {
								string longult;
								cout << "Does your champion a global or very long range ult?" << endl;
								cout << "'yes' or 'no'" << endl;
								cin >> longult;
								if (longult == "yes") {
									string ziggs;
									cout << "Is your champion a yordle?" << endl;
									cout << "'yes' or 'no'" << endl;
									cin >> ziggs;
									if (ziggs == "yes") {
										cout << "Your champion is Ziggs." << endl;
										system("pause");
									}
									if (ziggs == "no") {
										cout << "Your champion is Karthus." << endl;
										system("pause");
									}
								}
								if (longult == "no") {
									string vlad;
									cout << "Does your champion have mana?" << endl;
									cout << "'yes' or 'no'" << endl;
									cin >> vlad;
									if (vlad == "yes") {
										cout << "Your champion is Vladimir." << endl;
										system("pause");
									}
									if (vlad == "no") {
										string Graves;
										cout << "Does your champion hold a gun?" << endl;
										cout << "'yes' or 'no'" << endl;
										cin >> Graves;
										if (Graves == "yes") {
											cout << "Your champion is Graves." << endl;
											system("pause");
										}
										if (Graves == "no") {
											cout << "Your champion is Azir" << endl;
											system("pause");
										}
									}
								}
							}
						}
					}
				}
			}
			if (isFemaleU == "unsure") {
				// genderless ranged champions here
				//
				//
				//
				//
				cout << "Not yet implemented. Beep boop." << endl;
				system("pause");
			}

		}
		if (isRanged == false) {
			string isFemaleU2{};
			cout << "Is your champion male or female?" << endl;
			cout << "'male' or 'female'" << endl;
			cin >> isFemaleU2;
			if (isFemaleU2 == "female") {// bipedal melee female champs
				string femStun;
				cout << "Does your champion have the ability to stun enemy champions?" << endl;
				cout << "'yes' or 'no'" << endl;
				cin >> femStun;
				if (femStun == "yes") {
					string oneWep;
					cout << "Does your champion hold a single weapon?" << endl;
					cout << "'yes' or 'no'" << endl;
					cin >> oneWep;
					if (oneWep == "yes") {
						string femSword;
						cout << "Does your champion hold a sword?" << endl;
						cout << "'yes' or 'no'" << endl;
						cin >> femSword;
						if (femSword == "yes") {
							string fiora;
							cout << "Does your champion have a parry?" << endl;
							cout << "'yes' or 'no'" << endl;
							cin >> fiora;
							if (fiora == "yes") {
								cout << "Your champion is Fiora." << endl;
								system("pause");
							}
							if (fiora == "no") {
								cout << "I'm guessing you're thinking of Riven." << endl;
								system("pause");
							}
						}
						if (femSword == "no") {
							string poppy;
							cout << "Is your champion a yordle?" << endl;
							cout << "'yes' or 'no'" << endl;
							cin >> poppy;
							if (poppy == "yes") {
								cout << "Your champion is Poppy." << endl;
								system("pause");
							}
							if (poppy == "no") {
								cout << "I think the champion you chose is Qiyana." << endl;
								system("pause");
							}
						}
					}
					if (oneWep == "no") {
						string handsfeet;
						cout << "Does your champion only attack with their fists or feet?" << endl;
						cout << "'yes' or 'no'" << endl;
						cin >> handsfeet;
						if (handsfeet == "yes") {
							string vi;
							cout << "Does your champion have huge fists?" << endl;
							cout << "'yes' or 'no'" << endl;
							cin >> vi;
							if (vi == "yes") {
								cout << "Your champion is Vi." << endl;
								system("pause");
							}
							if (vi == "no") {
								cout << "Your champion is Camille." << endl;
								system("pause");
							}
						}
						if (handsfeet == "no") {
							string femMana;
							cout << "Does your champion use mana?" << endl;
							cout << "'yes' or 'no'" << endl;
							cin >> femMana;
							if (femMana == "yes") {
								cout << "Your champion is Irelia." << endl;
								system("pause");
							}
							if (femMana == "no") {
								cout << "Your champion is Akali." << endl;
								system("pause");
							}
						}
					}
				}
				if (femStun == "no") {
					string swordDagger;
					cout << "Does your champion hold a sword or dagger?" << endl;
					cout << "'yes' or 'no'" << endl;
					cin >> swordDagger;
					if (swordDagger == "yes") {
						string femMana2;
						cout << "Does your champion use mana?" << endl;
						cout << "'yes' or 'no'" << endl;
						cin >> femMana2;
						if (femMana2 == "yes") {
							string kayle;
							cout << "Can your champion dash?" << endl;
							cout << "'yes' or 'no'" << endl;
							cin >> kayle;
							if (kayle == "yes") {
								string catchFiora;
								cout << "Does your champion have the ability to parry?" << endl;
								cout << "'yes' or 'no'" << endl;
								cin >> catchFiora;
								if (catchFiora == "yes") {
									cout << "Your champion is Fiora." << endl;
									system("pause");
								}
								if (catchFiora == "no") {
									cout << "Your champion is Diana." << endl;
									system("pause");
								}
							}
							if (kayle == "no") {
								cout << "Your champion is Kayle." << endl;
								system("pause");
							}
						}
						if (femMana2 == "no") {
							cout << "Your champion is Katarina." << endl;
							system("pause");
						}
					}
					if (swordDagger == "no") {
						string evelynn;
						cout << "Is your champion intentionally seductive?" << endl;
						cout << "'yes' or 'no'" << endl;
						cin >> evelynn;
						if (evelynn == "yes") {
							cout << "Your champion is Evelynn." << endl;
							system("pause");
						}
						if (evelynn == "no") {
							string tentacles;
							cout << "Does your champion summon tentacles?" << endl;
							cout << "'yes' or 'no'" << endl;
							cin >> tentacles;
							if (tentacles == "yes") {
								cout << "Your champion is Illaoi." << endl;
								system("pause");
							}
							if (tentacles == "no") {
								cout << "Your champion is Shyvana." << endl;
								system("pause");
							}
						}
					}
				}
			}

			if (isFemaleU2 == "male") {// bipedal melee male champs
				AskHasWeapon();
				if (hasNoWeapon == true) {
					string hasHair;
					cout << "Does your champion have hair?" << endl;
					cout << "'yes' or 'no' or 'unsure'" << endl;
					cin >> hasHair;
					if (hasHair == "yes") {
						string hasKnockBack;
						cout << "Does your champion have a knock back or a fear?" << endl;
						cout << "'yes' or 'no'" << endl;
						cin >> hasKnockBack;
						if (hasKnockBack == "yes") {
							string beast;
							cout << "Does your champion resemble a beast like a wolf or bovine?" << endl;
							cout << "'yes' or 'no'" << endl;
							cin >> beast;
							if (beast == "yes") {
								string warwick;
								cout << "Does your champion have a strong sense of smell?" << endl;
								cout << "'yes' or 'no'" << endl;
								cin >> warwick;
								if (warwick == "yes") {
									cout << "It's Warwick!" << endl;
									system("pause");
								}
								if (warwick == "no") {
									string bear2;
									cout << "Does your champion have lightning claws?" << endl;
									cout << "'yes' or 'no'" << endl;
									cin >> bear2;
									if (bear2 == "yes") {
										cout << "It's Volibear!" << endl;
										system("pause");
									}
									if (bear2 == "no") {
										cout << "Oh, then it must be Alistar you're thinking of." << endl;
										system("pause");
									}
								}
							}
							if (beast == "no") {
								string lee;
								cout << "Is your champion blind?" << endl;
								cout << "'yes' or 'no'" << endl;
								cin >> lee;
								if (lee == "yes") {
									cout << "Your champion is Lee Sin." << endl;
									system("pause");
								}
								if (lee == "no") {
									cout << "Your champion is Gragas." << endl;
									system("pause");
								}
							}
						}
						if (hasKnockBack == "no") {
							string hat;
							cout << "Does your champion wear a hat or a hood? (main splash art only)" << endl;
							cout << "'yes' or 'no'" << endl;
							cin >> hat;
							if (hat == "yes") {
								string nunu;
								cout << "Is your champion friends with a yeti?" << endl;
								cout << "'yes' or 'no'" << endl;
								cin >> nunu;
								if (nunu == "yes") {
									cout << "You picked Nunu as your champion." << endl;
									system("pause");
								}
								if (nunu == "no") {
									cout << "Then your champion must be Udyr." << endl;
									system("pause");
								}
							}
							if (hat == "no") { //Can reduce this control path.
								string sylas;
								cout << "Is your champion known for stealing other people's ultimates?" << endl;
								cout << "'yes' or 'no'" << endl;
								cin >> sylas;
								if (sylas == "yes") {
									cout << "Your champion is Sylas." << endl;
									system("pause");
								}
								if (sylas == "no") {
									cout << "Your champion is Swain." << endl;
									system("pause");
								}
							}
						}
					}
					if (hasHair == "no") {
						string hasKnockUp;
						cout << "Does your champion have a knock up or knock back?" << endl;
						cout << "'yes' or 'no'" << endl;
						cin >> hasKnockUp;
						if (hasKnockUp == "yes") {
							string flesh;
							cout << "Is your champion made of wood, stone, metal, goo, or any other inorganic material?" << endl;
							cout << "'yes' or 'no'" << endl;
							cin >> flesh;
							if (flesh == "no") {
								string frel;
								cout << "Is your champion from the Freljord?" << endl;
								cout << "'yes' or 'no'" << endl;
								cin >> frel;
								if (frel == "yes") {
									string bear;
									cout << "Is your champion a bear?" << endl;
									cout << "'yes' or 'no'" << endl;
									cin >> bear;
									if (bear == "yes") {
										cout << "Your champion is Volibear." << endl;
										system("pause");
									}
									if (bear == "no") {
										cout << "Of course not. Braum isn't a bear." << endl;
										system("pause");
									}
								}
								if (frel == "no") {
									string drunk;
									cout << "Is your champion really fat or able to roll around?" << endl;
									cout << "'yes' or 'no'" << endl;
									cin >> drunk;
									if (drunk == "yes") {
										string gragas;
										cout << "Is your champion often drunk?" << endl;
										cout << "'yes' or 'no'" << endl;
										cin >> gragas;
										if (gragas == "yes") {
											cout << "Your champion is Gragas." << endl;
											system("pause");
										}
										if (gragas == "no") {
											cout << "Your champion is Rammus." << endl;
											system("pause");
										}
									}
									if (drunk == "no") {
										string void1;
										cout << "Is your champion from the void?" << endl;
										cout << "'yes' or 'no'" << endl;
										cin >> void1;
										if (void1 == "yes") {
											cout << "Your champion is Cho'Gath." << endl;
											system("pause");
										}
										if (void1 == "no") {
											cout << "Your champion is Singed." << endl;
											system("pause");
										}
									}
								}
							}
							if (flesh == "yes") {
								string science;
								cout << "Was your champion created by a scientist?" << endl;
								cout << "'yes' or 'no'" << endl;
								cin >> science;
								if (science == "yes") {
									string goo;
									cout << "Is your champion able to divide himself and reform like Majin Buu?" << endl;
									cout << "'yes' or 'no'" << endl;
									cin >> goo;
									if (goo == "no") {
										cout << "Your champion is me. Beep boop. I am Blitzcrank." << endl;
										system("pause");
									}
									if (goo == "yes") {
										cout << "Your champion is Zac." << endl;
										system("pause");
									}
								}
								if (science == "no") {
									string taunt;
									cout << "Does your champion have a taunt?" << endl;
									cout << "'yes' or 'no'" << endl;
									cin >> taunt;
									if (taunt == "yes") {
										string galio;
										cout << "Does your champion have wings?" << endl;
										cout << "'yes' or 'no'" << endl;
										cin >> galio;
										if (galio == "yes") {
											cout << "Your champion is Galio." << endl;
											system("pause");
										}
										if (galio == "no") {
											cout << "Your champion is Rammus." << endl;
											system("pause");
										}
									}
									if (taunt == "no") {
										string maokai;
										cout << "Does your champion resemble a tree?" << endl;
										cout << "'yes' or 'no'" << endl;
										cin >> maokai;
										if (maokai == "yes") {
											cout << "Your champion is Maokai." << endl;
											system("pause");
										}
										if (maokai == "no") {
											cout << "Your champion is Malphite." << endl;
											system("pause");
										}
									}
								}
							}
						}
						if (hasKnockUp == "no") {
							string dash;
							cout << "Can your champion dash?" << endl;
							cout << "'yes' or 'no'" << endl;
							cin >> dash;
							if (dash == "yes") {
								string blades;
								cout << "Does your champion have blades on their hands/arms?" << endl;
								cout << "'yes' or 'no'" << endl;
								cin >> blades;
								if (blades == "yes") {
									string kha;
									cout << "Can your champion evolve?" << endl;
									cout << "'yes' or 'no'" << endl;
									cin >> kha;
									if (kha == "yes") {
										cout << "Your champion is Kha'Zix." << endl;
										system("pause");
									}
									if (kha == "no") {
										cout << "Your champion is Nocturne." << endl;
										system("pause");
									}
								}
								if (blades == "no") {
									cout << "Your champion is Amumu." << endl;
									system("pause");
								}
							}
							if (dash == "no") {
								string poison;
								cout << "Does your champion use poison?" << endl;
								cout << "'yes' or 'no'" << endl;
								cin >> poison;
								if (poison == "yes") {
									cout << "Your champion is Singed." << endl;
									system("pause");
								}
								if (poison == "no") {
									string rammus;
									cout << "Is your champion an armodillo?" << endl;
									cout << "'yes' or 'no'" << endl;
									cin >> rammus;
									if (rammus == "yes") {
										cout << "Your champion is Rammus." << endl;
										system("pause");
									}
									if (rammus == "no") {
										cout << "Duh. Everyone knows Tahm Kench is a cat fish." << endl;
										system("pause");
									}
								}
							}
						}

					}
					if (hasHair == "unsure") {
						string humanoid;
						cout << "Okay, is your champion more like a human or more like a beast?" << endl;
						cout << "'human' or 'beast'" << endl;
						cin >> humanoid;
						if (humanoid == "human") {
							string braum;
							cout << "Does your champion have a very large shield?" << endl;
							cout << "'yes' or 'no'" << endl;
							cin >> braum;
							if (braum == "yes") {
								cout << "Your champion is Braum." << endl;
								system("pause");
							}
							if (braum == "no") {
								string grag;
								cout << "Is your champion often drunk?" << endl;
								cout << "'yes' or 'no'" << endl;
								cin >> grag;
								if (grag == "yes") {
									cout << "Your champion is Gragas." << endl;
									system("pause");
								}
								if (grag == "no") {
									cout << "Your champion is Lee Sin." << endl;
									system("pause");
								}
							}
						}
						if (humanoid == "beast") {
							string warwick;
							cout << "Can your champion smell blood?" << endl;
							cout << "'yes' or 'no'" << endl;
							cin >> warwick;
							if (warwick == "yes") {
								cout << "Your champion is Warwick." << endl;
								system("pause");
							}
							if (warwick == "no") {
								string alistar;
								cout << "Is your champion purple?" << endl;
								cout << "'yes' or 'no'" << endl;
								cin >> alistar;
								if (alistar == "yes") {
									cout << "Your champion is Alistar." << endl;
									system("pause");
								}
								if (alistar == "no") {
									string volibear;
									cout << "Is your champion a bear?" << endl;
									cout << "'yes' or 'no'" << endl;
									cin >> volibear;
									if (volibear == "yes") {
										cout << "Your champion is Volibear!" << endl;
										system("pause");
									}
									if (volibear == "no") {
										cout << "Your champion is Tahm Kench!" << endl;
										system("pause");
									}
								}
							}
						}

					}
				}
					if (hasNoWeapon == false) {
						string hasStunKU;
						cout << "Does your champion have a stun or knock up?" << endl;
						cout << "'yes' or 'no'" << endl;
						cin >> hasStunKU;
						if (hasStunKU == "yes") {
							string mask;
							cout << "Does your champion wear any of these: a helmet, a mask over their mouth or face, or have horns in any of their forms?" << endl;
							cout << "'yes' or 'no'" << endl;
							cin >> mask;
							if (mask == "yes") {
								string moveult;
								cout << "Does your champion's ult move their position or count as a dash?" << endl;
								cout << "'yes' or 'no'" << endl;
								cin >> moveult;
								if (moveult == "yes") {
									string spear;
									cout << "Does your champion wield a spear or dagger?" << endl;
									cout << "'yes' or 'no'" << endl;
									cin >> spear;
									if (spear == "yes") {
										string water;
										cout << "Can your champion go under water?" << endl;
										cout << "'yes' or 'no'" << endl;
										cin >> water;
										if (water == "yes") {
											cout << "Your champion is Pyke!" << endl;
											system("pause");
										}
										if (water == "no") {
											string wearShield;
											cout << "Does your champion hold a shield?" << endl;
											cout << "'yes' or 'no'" << endl;
											cin >> wearShield;
											if (wearShield == "yes") {
												cout << "Your champion is Pantheon!" << endl;
												system("pause");
											}
											if (wearShield == "no") {
												cout << "Your champion is Jarvan IV!" << endl;
												system("pause");
											}
										}
									}
									if (spear == "no") {
										string scythe;
										cout << "Does your champion hold a scythe?" << endl;
										cout << "'yes' or 'no'" << endl;
										cin >> scythe;
										if (scythe == "yes") {
											cout << "Your champion is Kayn." << endl;
											system("pause");
										}
										if (scythe == "no") {
											string ornn;
											cout << "Can your champion upgrade items for their teammates?" << endl;
											cout << "'yes' or 'no'" << endl;
											cin >> ornn;
											if (ornn == "yes") {
												cout << "Your champion is Ornn!" << endl;
												system("pause");
											}
											if (ornn == "no") {
												cout << "Your champion is Yasuo!" << endl;
												system("pause");
											}
										}
									}
								}
								if (moveult == "no") {
									string teeth;
									cout << "Does your champion show their teeth in their base splash art?" << endl;
									cout << "'yes' or 'no'" << endl;
									cin >> teeth;
									if (teeth == "yes") {
										string russian;
										cout << "Does your champion have a very large sword?" << endl;
										cout << "'yes' or 'no'" << endl;
										cin >> russian;
										if (russian == "yes") {
											cout << "Your champion is Aatrox." << endl;
											system("pause");
										}
										if (russian == "no") {
											cout << "Your champion is Renekton." << endl;
										}

									}
									if (teeth == "no") {
										string eyes;
										cout << "Does your champion appear to have more than two eyes?" << endl;
										cout << "'yes' or 'no'" << endl;
										cin >> eyes;
										if (eyes == "yes") {
											cout << "Your champion is Jax." << endl;
											system("pause");
										}
										if (eyes == "no") {
											cout << "Your champion is Nautilus." << endl;
											system("pause");
										}
									}

								}
							}
							if (mask == "no") {
								string sharp;
								cout << "Does your champion have a sharp weapon?" << endl;
								cout << "'yes' or 'no'" << endl;
								cin >> sharp;
								if (sharp == "yes") {
									string axe;
									cout << "Does your champion hold an axe or scythe?" << endl;
									cout << "'yes' or 'no'" << endl;
									cin >> axe;
									if (axe == "yes") {
										string revive;
										cout << "Does your champion revive upon death for a brief amount of time?" << endl;
										cout << "'yes' or 'no'" << endl;
										cin >> revive;
										if (revive == "yes") {
											cout << "Your champion is Sion!" << endl;
											system("pause");
										}
										if (revive == "no") {
											string MordeCatch;
											cout << "Does your champion teleport people into a different realm to duel them?" << endl;
											cout << "'yes' or 'no'" << endl;
											cin >> MordeCatch;
											if (MordeCatch == "yes") {
												cout << "Your champion is Mordekaiser!" << endl;
												system("pause");
											}
											if (MordeCatch == "no") {
												cout << "Your champion is Kayn." << endl;
												system("pause");
											}
										}
									}
									if (axe == "no") {
										string wind;
										cout << "Is your champion able to summon tornadoes?" << endl;
										cout << "'yes' or 'no'" << endl;
										cin >> wind;
										if (wind == "yes") {
											cout << "Your champion is Yasuo!" << endl;
											system("pause");
										}
										if (wind == "no") {
											string fizz;
											cout << "Is your champion able to summon sharks?" << endl;
											cout << "'yes' or 'no'" << endl;
											cin >> fizz;
											if (fizz == "yes") {
												cout << "Your champion is Fizz!" << endl;
												system("pause");
											}
											if (fizz == "no") {
												cout << "Your champion is Xin Zhao." << endl;
												system("pause");
											}
										}
									}
								}
								if (sharp == "no") {
									string selfShield;
									cout << "Is your champion able to shield themselves?" << endl;
									cout << "'yes' or 'no'" << endl;
									cin >> selfShield;
									if (selfShield == "yes") {
										string taric;
										cout << "Does your champion hold a hammer?" << endl;
										cout << "'yes' or 'no'" << endl;
										cin >> taric;
										if (taric == "yes") {
											cout << "Your champion is Taric!" << endl;
											system("pause");
										}
										if (taric == "no") {
											string ekko;
											cout << "Can your champion travel through time?" << endl;
											cout << "'yes' or 'no'" << endl;
											cin >> ekko;
											if (ekko == "yes") {
												cout << "Your champion is Ekko!" << endl;
												system("pause");
											}
											if (ekko == "no") {
												cout << "Your champion is Sylas." << endl;
												system("pause");
											}
										}
									}
									if (selfShield == "no") {
										string wukong;
										cout << "Is your champion a monkey?" << endl;
										cout << "'yes' or 'no'" << endl;
										cin >> wukong;
										if (wukong == "yes") {
											cout << "Your champion is Wukong!" << endl;
											system("pause");
										}
										if (wukong == "no") {
											string SylasCatch;
											cout << "Is your champion able to steal ultimates?" << endl;
											cout << "'yes' or 'no'" << endl;
											cin >> SylasCatch;
											if (SylasCatch == "yes") {
												cout << "Your champion is Sylas!" << endl;
												system("pause");
											}
											if (SylasCatch == "no") {
												cout << "Your champion is Gragas." << endl;
												system("pause");
											}
										}
									}
								}
							}
						}
						if (hasStunKU == "no") {
							string DashTP;
							cout << "Does your champion have a dash or teleport?" << endl;
							cout << "'yes' or 'no'" << endl;
							cin >> DashTP;
							if (DashTP == "yes") {
								string mana;
								cout << "Does your champion use mana?" << endl;
								cout << "'yes' or 'no'" << endl;
								cin >> mana;
								if (mana == "yes") {
									string voidchamp;
									cout << "Is your champion from the void?" << endl;
									cout << "'yes' or 'no'" << endl;
									cin >> voidchamp;
									if (voidchamp == "yes") {
										string kassadin;
										cout << "Can your champion silence opponents briefly?" << endl;
										cout << "'yes' or 'no'" << endl;
										cin >> kassadin;
										if (kassadin == "yes") {
											cout << "Your champion is Kassadin." << endl;
											system("pause");
										}
										if (kassadin == "no") {
											cout << "Your champion is Kha'Zix." << endl;
											system("pause");
										}
									}
									if (voidchamp == "no") {
										string shaco;
										cout << "Is your champion a clown?" << endl;
										cout << "'yes' or 'no'" << endl;
										cin >> shaco;
										if (shaco == "yes") {
											cout << "Your champion is Shaco." << endl;
											system("pause");
										}
										if (shaco == "no") {
											cout << "Then I think your champion is Talon." << endl;
											system("pause");
										}
									}
								}
								if (mana == "no") {
									string ninja;
									cout << "Is your champion a ninja?" << endl;
									cout << "'yes' or 'no'" << endl;
									cin >> ninja;
									if (ninja == "yes") {
										string zed;
										cout << "Does your champion use a forbidden art?" << endl;
										cout << "'yes' or 'no'" << endl;
										cin >> zed;
										if (zed == "yes") {
											cout << "Your champion is Zed!" << endl;
											system("pause");
										}
										if (zed == "no") {
											cout << "I'm guessing your champion is Shen." << endl;
											system("pause");
										}

									}
									if (ninja == "no") {
										string clown;
										cout << "Is your champion a clown?" << endl;
										cout << "'yes' or 'no'" << endl;
										cin >> clown;
										if (clown == "yes") {
											cout << "Your champion is Shaco." << endl;
											system("pause");
										}
										if (clown == "no") {
											cout << "Your champion is Rengar." << endl;
											system("pause");
										}
									}
								}
							}
							if (DashTP == "no") {
								string sharpWep2;
								cout << "Does your champion wield a sharp weapon?" << endl;
								cout << "'yes' or 'no'" << endl;
								cin >> sharpWep2;
								if (sharpWep2 == "no") {
									string wall;
									cout << "Can your champion spawn a wall or pillar?" << endl;
									cout << "'yes' or 'no'" << endl;
									cin >> wall;
									if (wall == "yes") {
										string yorick;
										cout << "Can your champion summon the dead?" << endl;
										cout << "'yes' or 'no'" << endl;
										cin >> yorick;
										if (yorick == "yes") {
											cout << "Your champion is Yorick!" << endl;
											system("pause");
										}
										if (yorick == "no") {
											cout << "I'm guessing your champion is Trundle." << endl;
											system("pause");
										}
									}
									if (wall == "no") {
										string morde;
										cout << "Can your champion pull enemies towards him?" << endl;
										cout << "'yes' or 'no'" << endl;
										cin >> morde;
										if (morde == "yes") {
											cout << "Your champion is Mordekaiser." << endl;
											system("pause");
										}
										if (morde == "no") {
											cout << "I'm guessing the champion you're thinking of is Nasus." << endl;
											system("pause");
										}
									}
								}
								if (sharpWep2 == "yes") {
									string haveSword;
									cout << "Does your champion have a sword?" << endl;
									cout << "'yes' or 'no'" << endl;
									cin >> haveSword;
									if (haveSword == "yes") {
										string haveGun;
										cout << "Does your champion also have a gun?" << endl;
										cout << "'yes' or 'no'" << endl;
										cin >> haveGun;
										if (haveGun == "yes") {
											cout << "The champion you're thinking of is Gangplank." << endl;
											system("pause");
										}
										if (haveGun == "no") {
											cout << "The champion you're thinking of is Garen." << endl;
											system("pause");
										}
									}
									if (haveSword == "no") {
										string throwWeapon;
										cout << "Can your champion throw their weapon?" << endl;
										cout << "'yes' or 'no'" << endl;
										cin >> throwWeapon;
										if (throwWeapon == "yes") {
											string mundo;
											cout << "Does your champion go where he pleases?" << endl;
											cout << "'yes' or 'no'" << endl;
											cin >> mundo;
											if (mundo == "yes") {
												cout << "Mundo goes where he pleases." << endl;
												system("pause");
											}
											if (mundo == "no") {
												cout << "Of course Olaf doesn't go where he pleases." << endl;
												system("pause");
											}
										}
										if (throwWeapon == "no") {
											cout << "The champion you're thinking of is Darius." << endl;
											system("pause");
										}
									}
								}
							}
						}
					}
			}
			if (isFemaleU2 == "unsure") {//Obscure melee champs
				//May add stuff here later.
			}
		}
	}
	if (r2 == "no") {
		TwoLegs = false;
		AskIsRanged();
		if (isRanged == true) {
			//class x here
			string TailTent;
			cout << "Does your champion have a tail or tentacles?" << endl;
			cout << "'yes' or 'no'" << endl;
			cin >> TailTent;
			if (TailTent == "yes") {
				string HealShield;
				cout << "Can your champion heal or shield others?" << endl;
				cout << "'yes' or 'no'" << endl;
				cin >> HealShield;
				if (HealShield == "yes") {
					string yuumi;
					cout << "Can your champion summon tidal waves?" << endl;
					cout << "'yes' or 'no'" << endl;
					cin >> yuumi;
					if (yuumi == "no") {
						cout << "Your champion is Yuumi." << endl;
						system("pause");
					}
					if (yuumi == "yes") {
						cout << "Your champion is Nami." << endl;
						system("pause");
					}
				}
				if (HealShield == "no") {
					string femv;
					cout << "Does your champion have a female voice?" << endl;
					cout << "'yes' or 'no'" << endl;
					cin >> femv;
					if (femv == "yes") {
						string anivia;
						cout << "Does your champion have wings?" << endl;
						cout << "'yes' or 'no'" << endl;
						cin >> anivia;
						if (anivia == "no") {
							cout << "Your champion is Cassiopeia." << endl;
							system("pause");
						}
						if (anivia == "yes") {
							cout << "Your champion is Anivia." << endl;
							system("pause");
						}
					}
					if (femv == "no") {
						string yuumi;
						cout << "Can your champion summon tidal waves?" << endl;
						cout << "'yes' or 'no'" << endl;
						cin >> yuumi;
						if (yuumi == "yes") {
							cout << "Your champion is Yuumi." << endl;
							system("pause");
						}
						if (yuumi == "no") {
							cout << "Your champion is Nami." << endl;
							system("pause");
						}
					}
				}
			}
			if (TailTent == "no") {
				string mfm;
				cout << "Is your champion female?" << endl;
				cout << "'yes' or 'no'" << endl;
				cin >> mfm;
				if (mfm == "yes") {
					string invul;
					cout << "Does your champion's ult make them invulnerable?" << endl;
					cout << "'yes' or 'no'" << endl;
					cin >> invul;
					if (invul == "yes") {
						string kayle;
						cout << "Does your champion have wings?" << endl;
						cout << "'yes' or 'no'" << endl;
						cin >> kayle;
						if (kayle == "yes") {
							cout << "Your champion is Kayle." << endl;
							system("pause");
						}
						if (kayle == "no") {
							cout << "Your champion is Lissandra." << endl;
							system("pause");
						}
					}
					if (invul == "no") {
						string sona;
						cout << "Does your champion play an instrument?" << endl;
						cout << "'yes' or 'no'" << endl;
						cin >> sona;
						if (sona == "yes") {
							cout << "Your champion is Sona." << endl;
							system("pause");
						}
						if (sona == "no") {
							cout << "Your champion is Syndra." << endl;
							system("pause");
						}
					}
				}
				if (mfm == "no") {
					string HoodMask;
					cout << "Does your champion have a hood, hat, or mask?" << endl;
					cout << "'yes' or 'no'" << endl;
					cin >> HoodMask;
					if (HoodMask == "yes") {
						string selfShield;
						cout << "Does your champion have a self shield or self spell shield?" << endl;
						cout << "'yes' or 'no'" << endl;
						cin >> selfShield;
						if (selfShield == "yes") {
							string urgot;
							cout << "Does your champion have multiple legs?" << endl;
							cout << "'yes' or 'no'" << endl;
							cin >> urgot;
							if (urgot == "yes") {
								cout << "Your champion is Urgot." << endl;
								system("pause");
							}
							if (urgot == "no") {
								cout << "Your champion is Malzahar." << endl;
								system("pause");
							}
						}
						if (selfShield == "no") {
							string karthus;
							cout << "Does your champion have a scythe?" << endl;
							cout << "'yes' or 'no'" << endl;
							cin >> karthus;
							if (karthus == "yes") {
								cout << "Your champion is Karthus." << endl;
								system("pause");
							}
							if (karthus == "no") {
								cout << "Your champion is Xerath." << endl;
								system("pause");
							}
						}
					}
					if (HoodMask == "no") {
						string mustache;
						cout << "Does your champion have a mustache?" << endl;
						cout << "'yes' or 'no'" << endl;
						cin >> mustache;
						if (mustache == "yes") {
							string corki;
							cout << "Does your champion ride in a vehicle?" << endl;
							cout << "'yes' or 'no'" << endl;
							cin >> corki;
							if (corki == "yes") {
								cout << "Your champion is Corki." << endl;
								system("pause");
							}
							if (corki == "no") {
								cout << "Your champion is Zilean." << endl;
								system("pause");
							}
						}
						if (mustache == "no") {
							string catchUrgot;
							cout << "Does your champion have mulitiple legs?" << endl;
							cout << "'yes' or 'no'" << endl;
							cin >> catchUrgot;
							if (catchUrgot == "yes") {
								cout << "Your champion is Urgot." << endl;
								system("pause");
							}
							if (catchUrgot == "no") {
								cout << "Your champion is Xerath." << endl;
								system("pause");
							}
						}
					}
				}
			}
		}
		if (isRanged == false) {
			string ride;
			cout << "Does your champion ride something?" << endl;
			cout << "'yes' or 'no'" << endl;
			cin >> ride;
			if (ride == "yes") {
				string rumble;
				cout << "Does your champion ride a creature or animal?" << endl;
				cout << "'yes' or 'no'" << endl;
				cin >> rumble;
				if (rumble == "yes") {
					string sej;
					cout << "Does your champion ride a boar?" << endl;
					cout << "'yes' or 'no'" << endl;
					cin >> sej;
					if (sej == "yes") {
						cout << "Your champion is Sejuani." << endl;
						system("pause");
					}
					if (sej == "no") {
						cout << "Your champion is Kled." << endl;
						system("pause");
					}
				}
				if (rumble == "no") {
					cout << "Your champion is Rumble." << endl;
					system("pause");
				}
			}
			if (ride == "no") {
				string floats;
				cout << "Does your champion appear to float?" << endl;
				cout << "'yes' or 'no'" << endl;
				cin >> floats;
				if (floats == "yes") {
					string Kayle;
					cout << "Does your champion have feathery wings?" << endl;
					cout << "'yes' or 'no'" << endl;
					cin >> Kayle;
					if (Kayle == "yes") {
						cout << "Your champion is Kayle." << endl;
						system("pause");
					}
					if (Kayle == "no") {
						cout << "Your champion is Nocturne." << endl;
						system("pause");
					}
				}
				if (floats == "no") {
					string hec;
					cout << "Does your champion resemble a centaur or horse?" << endl;
					cout << "'yes' or 'no'" << endl;
					cin >> hec;
					if (hec == "yes") {
						cout << "Your champion is Hecarim." << endl;
						system("pause");
					}
					if (hec == "no") {
						string skarner;
						cout << "Does your champion have an ultimate ability that drags opponents?" << endl;
						cout << "'yes' or 'no'" << endl;
						cin >> skarner;
						if (skarner == "yes") {
							cout << "Your champion is Skarner." << endl;
							system("pause");
						}
						if (skarner == "no") {
							cout << "Your champion is Rek'sai." << endl;
							system("pause");
						}
					}
				}
			}
		}

	}
	system("pause");
}