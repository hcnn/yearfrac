# yearfrac


30/360

* `d30360e2` -- 30E2/360, Eurobond basis model 2
* `d30360e3` -- 30E3/360, Eurobond basis model 3
* `d30360p` -- 30E+/360
* `d30360s` -- 30/360 ICMA, 30/360 Eurobond Basis, ISDA-2006, 30S/360 Special German
* `d30360m` -- 30/360 US EOM
* `d30360n` -- 30/360 NASD
* `d30360u` -- 30/360 ISDA, 30U/360, 30/360 US, 30/360 Bond Basis, 30/360 U.S. Municipal, American Basic Rule
* (not available) `d30360e` -- 30E/360 ISDA, Eurobond Basis ISDA-2000, German SWX, German Master EBF MA

30/365

* `d30365` -- 30/365

30/act

* (not available) `d30act` -- 30/Actual

act/360

* `act360` -- Actual/360, French

act/365

* `act365n` -- Actual/365NL, Actual/365 No Leap
* `act365f` -- Actual/365 Fixed, English
* (not available) `act365l` -- Actual/365L, Actual/Actual Basic Rule, ISMA-Year

act/act

* `act_isda` -- Actual/Actual ISDA
* `act_afb` -- Actual/Actual AFB
* (not available) `act_icma` -- Actual/Actual ICMA


### Installation
```
clib install hcnn/yearfrac
```

Or add to your `package.json` and run `clib install`

```
{ ...
    "dependencies": {
        "hcnn/yearfrac": "0.1.0"
        ...
```

### Test and Demo
Download, compile, and run [test.c](https://github.com/hcnn/yearfrac/blob/master/test.c) and [demo.c](https://github.com/hcnn/yearfrac/blob/master/demo.c)

```
git clone git@github.com:hcnn/yearfrac.git
cd yearfrac
make deps
make validate
make showcase
```
