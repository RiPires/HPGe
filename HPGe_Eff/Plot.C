#include "TFile.h"
#include "TTree.h"
#include <iostream>
#include "TH2.h"
#include <cmath>
using namespace std;

void Plot(){

     // Open the ROOT file
     TFile *InputTFile = new TFile("add.root", "READ");
     // Check if the file is open successfully
     if (!InputTFile || InputTFile->IsZombie()){
          cout << "Error: Could not open ROOT file." << endl;
          return;
     }  
    
     // Access the tree in the file
     TTree *ScoringTTRee = (TTree*)InputTFile->Get("Scoring");

     // Create a canvas for plotting
     TCanvas* canvas = new TCanvas("canvas", "Energy deposit", 800, 600);

     // Create a histogram
     TH1D* hist = new TH1D("hist", "Energy deposit (Edet)", 100, 0, 0.15);

     // Project the variable into the histogram
     ScoringTTRee->Project("hist", "Scoring.Edep");

     // Set the histogram style and labels
     hist->SetLineColor(kBlue);
     hist->SetLineWidth(2);
     hist->GetXaxis()->SetTitle("Energy deposited (MeV)");
     hist->GetYaxis()->SetTitle("Counts");

     // Draw the histogram on the canvas
     hist->Draw();

     // Count the entries with energy greater than the specified threshold
     Double_t Hits = hist->Integral(hist->FindBin(0.12), hist->GetNbinsX());
     cout << "Nr of hits = " << Hits << endl;

     // Display the canvas
     canvas->Draw();
}
