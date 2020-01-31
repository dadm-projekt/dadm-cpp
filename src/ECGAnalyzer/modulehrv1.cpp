#include "modulehrv1.h"
using namespace std;
ModuleHrv1::ModuleHrv1(QList<double> inputRPeaks)
{
 this->inputRPeaks = inputRPeaks;
}

ModuleHrv1::~ModuleHrv1()
{

}
QList<double> ModuleHrv1::getInputRPeaks()
{
    return inputRPeaks;
}
QVector<double> ModuleHrv1::gethrvx()
{
    return hrvx;
}
QVector<double> ModuleHrv1::gethrvy()
{
    return hrvy;
}


QList<double> ModuleHrv1::getx()
{
    return x;
}
QList<double> ModuleHrv1::gety()
{
    return y;
}
QList<double> ModuleHrv1::getTimeParams()
{
    return timeParams;
}
QList<double> ModuleHrv1::getpsdx()
{
    return psdx;
}
QList<double> ModuleHrv1::getfxx()
{
    return fxx;
}
QList<double> ModuleHrv1::getFreqParams()
{
    return freqParams;
}
void ModuleHrv1::setInputRPeaks(QList<double> inputRPeaks)
{
    this->inputRPeaks = inputRPeaks;
}

void ModuleHrv1::sethrvx(QVector<double> hrvx)
{
    this->hrvx=hrvx;
}

void ModuleHrv1::sethrvy(QVector<double> hrvy)
{
    this->hrvy=hrvy;
}
void ModuleHrv1::setx(QList<double> x)
{
    this->x=x;
}
void ModuleHrv1::sety(QList<double> y)
{
    this->y=y;
}
void ModuleHrv1::settimeParams(QList<double> timeParams)
{
    this->timeParams=timeParams;
}
void ModuleHrv1::setpsdx(QList<double> psdx)
{
     this-> psdx= psdx;
}
void ModuleHrv1::setfxx(QList<double> fxx)
{
        this-> fxx= fxx;
}
void ModuleHrv1::setfreqParams(QList<double> freqParams)
{
        this-> freqParams= freqParams;
}
void ModuleHrv1::AnalyzeSignal()
{
  this->FindTimeParams();

  this->FindFreqParams();
}

 QVector<double> ModuleHrv1::gethrvx_fromRR(QList<double> inputRPeaks)
 {
     QVector<double> hrvx;
     QVector<double> hrvx2;
     for (int i=0; i<inputRPeaks.size(); i++)
     {
         hrvx.insert(i,inputRPeaks[i]);
     }



     for (int i = 0; i< hrvx.size(); i++)
     {
         hrvx[i]=hrvx[i]*1000;
         hrvx2.insert(i,hrvx[i]);
     }

     hrvx2.erase (hrvx2.end()-1);
     int p0= hrvx2.size();
     for (int i=0; i<p0; i++)
     {
         x.insert(i,hrvx2[i]);

     }

     this->setx(x);
     return hrvx;
}

 QVector<double> ModuleHrv1::gethrvy_fromRR(QList<double> inputRPeaks)
 {
     QVector<double> hrvx;
     hrvx=gethrvx_fromRR(inputRPeaks);
     QVector<double> hrvy;

     for (int i=1; i<hrvx.size(); i++)
     {
         hrvy.insert(hrvy.begin()+i-1, hrvx[i]-hrvx[i-1]);
     }


     for (int i = 0; i< hrvx.size(); i++)
     {
         hrvy[i]=hrvy[i]*1000;
     }


     int p0= hrvx.size();
     for (int i=0; i<p0; i++)
     {
         y.insert(i,hrvy[i]);
     }


     this->sety(y);
     return hrvy;


 }

void ModuleHrv1::FindTimeParams()
{
   QVector<double> hrvy;
   QVector<double> hrvx;
   hrvx=gethrvx_fromRR(inputRPeaks);
   hrvy=gethrvy_fromRR(inputRPeaks);


    double RR= accumulate(hrvy.begin(), hrvy.end(), 0);
    RR= RR/hrvy.size();

    double SDNN =0;
    int p1=hrvy.size();
    for (int i =0; i <p1; i++ ){
           SDNN += pow(hrvy[i] - RR, 2);
    }
    SDNN=SDNN/(hrvy.size()-1);
    SDNN = sqrt(SDNN);

    double RMSSD= 0;
    for (int i =0; i <p1-1; i++ )
    {
        RMSSD+= pow(hrvy[i+1]-hrvy[i], 2);
    }
    RMSSD=RMSSD/(p1-1);
    RMSSD = sqrt(RMSSD);

    double NN50=0;
    for (int i =0; i< p1-1; i++)
    {
        if(hrvy[i+1]-hrvy[i]>50)
        {
            NN50+=1;
        }
    }

    double pNN50=(NN50/(p1-1))*100;

    double t1=0;
    double t2=0;
    double k =0;
    double suma=0;
    double odch=0;
    vector<double> SDANN;
    vector<double> SDANNi;
    double SDANNsr=0;
    double SDANNstd=0;
    double SDANNisr=0;
    while (t2<=p1)
    {
        if(suma>=300000)
        {
        SDANN.insert(SDANN.begin()+k, suma/(t2-t1));
        for (int i =0; i <t2-t1; i++ )
        {
            odch+= pow(hrvy[i+t1]-(suma/(t2-t1)), 2);
        }
        odch=odch/(t2-t1-1);
        odch = sqrt(odch);
        SDANNi.insert(SDANNi.begin()+k, odch);
        suma=0;
        t1=t2;
        k+=1;
        }
        suma+=hrvy[t2];
        t2+=1;
    }
    if (k>0)
    {


        SDANNsr=accumulate(SDANN.begin(), SDANN.end(), 0);
        SDANNsr=SDANNsr/k;
        for (int i =0; i <k; i++ )
        {
            SDANNstd+= pow(SDANN[i]-SDANNsr, 2);
        }
        SDANNstd=SDANNstd/(k-1);
        SDANNstd = sqrt(SDANNstd);//


        SDANNisr=accumulate(SDANNi.begin(), SDANNi.end(), 0);

        SDANNisr= SDANNisr/k;

    }

    vector<double> SDSDi;
    double SDSD=0;
    for (int i =0; i< p1-1; i++)
    {
        SDSDi.insert( SDSDi.begin()+ i,hrvy[i+1]-hrvy[i]);
    }
    double sumka= accumulate(SDSDi.begin(), SDSDi.end(), 0);
    sumka=sumka/SDSDi.size();
    int p2=SDSDi.size();
    for (int i =0; i <p2; i++)
    {
         SDSD+= pow(SDSDi[i]-sumka, 2);
    }
     SDSD=   SDSD/(p2-1);
     SDSD = sqrt(SDSD);

     QList<double> timeParams;
     timeParams.insert(0, RR);
     timeParams.insert(1, SDNN);
     timeParams.insert(2, RMSSD);
     timeParams.insert(3, NN50);
     timeParams.insert(4, pNN50);
     timeParams.insert(5, SDANNstd);
     timeParams.insert(6, SDANNisr);
     timeParams.insert(7, SDSD);

     this->settimeParams(timeParams);
}

void ModuleHrv1::FindFreqParams()
{
    QVector<double> hrvy;
    QVector<double> hrvx;
    hrvx=gethrvx_fromRR(inputRPeaks);
    hrvy=gethrvy_fromRR(inputRPeaks);
    hrvx.erase (hrvx.end()-1);

    int m =hrvy.size();
    double hrvyc[m];
    fftw_complex  *out;
    out = (fftw_complex*) fftw_malloc(sizeof(fftw_complex)*m);

    int halfsize= m/2;
    double psd[halfsize];
    double fx[halfsize];
    double p=0;
    int n= hrvx[m-1];
    double o = n/m;
    double freq= 1/o;
    double realVal=0;
    double imagVal=0;

    double HF = 0;
    double LF = 0;
    double VLF = 0;
    double ULF = 0;
    vector<double> hrvx1(begin(hrvx),end(hrvx));
    vector<double> hrvy1(begin(hrvy),end(hrvy));

    tk::spline s;
    s.set_points(hrvx1,hrvy1);

    fftw_plan plan = fftw_plan_dft_r2c_1d(m, hrvyc, out, FFTW_MEASURE);

    for (int i=0; i<m; i++)
    {
        hrvyc[i]=s(p);
        p+=o;
    }

    for (int i=0; i<m; i++)
    {
        double multiplier = 0.5*(1-cos(2*3.14*i/(m-1)));
        hrvyc[i] *= multiplier;
    }


    fftw_execute(plan);

    for (int i = 0; i < halfsize; i++)
    {
        realVal=  out[i][REAL]/m;
        imagVal = out[halfsize-i][IMAG]/m;
        psd[i]=(realVal*realVal + imagVal*imagVal);
        fx[i] = i*freq;

        if (i*freq < 0.003)
        {
            if (psd[i] > ULF) ULF = psd[i];
        }

        if ( i*freq >= 0.003 && i*freq < 0.040)
        {
            if (psd[i] > VLF) VLF = psd[i];
        }

        if ( i*freq >= 0.040 && i*freq < 0.150)
        {
            if (psd[i] > LF) LF = psd[i];
        }

        if ( i*freq >= 0.150 && i*freq < 0.400)
        {
            if (psd[i] > HF) HF = psd[i];
        }
    }
   int tp = (HF + LF + VLF +ULF + HF);
  ;
   QList<double> freqParams;
   freqParams.insert(0, ULF);
   freqParams.insert(1, VLF);
   freqParams.insert(2, LF);
   freqParams.insert(3, HF);
   freqParams.insert(4, tp);
   freqParams.insert(5, LF/HF);
   QList<double> psdx;
   QList<double> fxx;
   int p3=sizeof(psd);
   for (int i=0; i<p3; i++)
   {
       psdx.insert(i,psd[i]);
       fxx.insert(i, fx[i]);
   }

    this->setpsdx(psdx);
    this->setfxx(fxx);
    this->setfreqParams(freqParams);
}


