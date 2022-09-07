

d = open("Create.txt","x")
d. write("Michael Carter and his sister Michelle Carter were born as twins to a loving mother and an irresponsible father in Gotham City in the 25th Century. On their 4th birthday, their father left the household to pursue his true love, gambling, leaving a huge gambling debt behind for the struggling family. Michael became a football player in college with the nickname ""Booster"", hoping that he would make it into the big leagues, when his mother was suffering from a debilitating disease that required a treatment that his family could not afford. Turning to the same vice as his father, Michael made bets and purposely threw games in order to earn enough money for the treatment. After his mother was cured, Michael was arrested and put in jail for gambling, instantly breaking his mother's heart."

'After he was set free from jail, Michael managed to get a job as a security officer for the Metropolis Space Museum, where he saw images of superheroes from the 20th Century that were legends in his time. Deciding to change his life and become a superhero himself, Michael stole some artifacts from the museum as well as the security robot Skeets and used Rip Hunter''s'" time machine to travel back to the late 20th Century. It was there that he made his public debut, saving the life of the President of the United States Ronald Reagan from the Chiller as the new superhero Goldstar. Nervous, Michael misspoke on live television and got stuck with the name Booster Gold instead.")

d.close

d= open("Create.txt","r")
f = d.read()
print(f)