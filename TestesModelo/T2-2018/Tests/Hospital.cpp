/*
 * Hospital.cpp
 */

#include "Hospital.h"
//
#include <algorithm>
#include <map>


Hospital::Hospital(unsigned trayC):trayCapacity(trayC)
{ }

bool Hospital::addDoctor(const Doctor &d1) {
	doctors.push_back(d1);
}

list<Doctor> Hospital::getDoctors() const {
	return doctors;
}

void Hospital::addTrays(stack<Patient> tray1) {
	letterTray.push_back(tray1);
}

list<stack<Patient> > Hospital::getTrays() const {
	return letterTray;
}



unsigned Hospital::numPatients(string medicalSpecialty) const
{
    unsigned total=0;
	for(Doctor d1 :doctors){
        if(d1.getMedicalSpecialty() == medicalSpecialty){total+=d1.getPatients().size();}
    }
    return total;
}

bool compare(Doctor d1, Doctor d2){
    if(d1.getPatients().size()==d2.getPatients().size()){
        if(d1.getMedicalSpecialty()==d2.getMedicalSpecialty()){return d1.getCode()<d2.getCode();}
        return d1.getMedicalSpecialty()<d2.getMedicalSpecialty();
    }
    return d1.getPatients().size()<d2.getPatients().size();
}

void Hospital::sortDoctors() {
    doctors.sort(compare);

}



bool Hospital::addDoctor(unsigned codM1, string medicalSpecialty1) {

    int total = 0;
    Doctor d1 (codM1, medicalSpecialty1);
    addDoctor(d1);

    for(Doctor d1: doctors){
        if(d1.getMedicalSpecialty() == medicalSpecialty1){total++;}
    }

    return total<3;

}



queue<Patient> Hospital::removeDoctor(unsigned codM1) {
    queue<Patient> p1;

    for(auto it =doctors.begin() ; it != doctors.end() ; it++){
        if (it->getCode()==codM1){p1 = it->getPatients(); doctors.erase(it); return p1;}
    }

    throw DoctorInexistent();

}


bool Hospital::putInLessBusyDoctor(unsigned cod1, string medicalSpecialty1) {
    Doctor last = *doctors.begin();
    int count=0;
	for(Doctor d1: doctors){
        if (d1.getMedicalSpecialty()==medicalSpecialty1){
            if (d1.getPatients().size()<last.getPatients().size()){
                last = d1;
                count++;
            }
        }
    }

    if(count!=0){last.addPatient(Patient(cod1, medicalSpecialty1)); return true;}
	return false;

}



void Hospital::processPatient(unsigned codM1) {
	// TODO

}


unsigned Hospital::removePatients(unsigned codP1) {
    unsigned count = 0;
	for(auto it = letterTray.begin() ; it!=letterTray.end() ; it++){
        if (it->top().getCode() == codP1){it->pop(); count++;}
        if(it->empty()){letterTray.erase(it);}
    }

	return count;

}



